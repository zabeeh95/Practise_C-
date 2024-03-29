#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

#define N 3
int steps = 0;
int row[] = {1, 0, -1, 0};
int col[] = {0, -1, 0, 1};

int final [N][N] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
};

struct Node
{
    Node *parent;
    int mat[N][N];
    int x, y;
    int cost;
    int level;
    int heuristic; // Added heuristic value for A* Search
};

int printPuzzle(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

int calculateManhattanDistance(int mat[N][N], int final[N][N])
{
    int totalDistance = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int value = mat[i][j];

            if (value != 0)
            { // Skip the empty tile
                // Find the goal position of the current value
                int goalX, goalY;
                for (goalX = 0; goalX < N; goalX++)
                {
                    for (goalY = 0; goalY < N; goalY++)
                    {
                        if (final[goalX][goalY] == value)
                        {
                            break;
                        }
                    }
                }

                // Calculate Manhattan distance and add to total distance
                totalDistance += abs(i - goalX) + abs(j - goalY);
            }
        }
    }

    return totalDistance;
}

int calculateCost(int mat[N][N], int final[N][N])
{
    // In this case, we are using the Manhattan distance as the cost
    return calculateManhattanDistance(mat, final);
}

Node *newNode(int mat[N][N], int x, int y, int newX, int newY, int level, Node *parent)
{
    Node *node = new Node;
    node->parent = parent;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            node->mat[i][j] = mat[i][j];
        }
    }

    int temp = node->mat[x][y];
    node->mat[x][y] = node->mat[newX][newY];
    node->mat[newX][newY] = temp;

    node->level = level;
    // Calculate the cost as the sum of Manhattan distance and level
    node->cost = calculateCost(node->mat, final) + node->level;
    node->x = newX;
    node->y = newY;
    return node;
}

int WithinLimits(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < N);
}

void DisplayPuzzle(Node *root)
{
    if (root == NULL)
        return;
    DisplayPuzzle(root->parent);
    printPuzzle(root->mat);
    printf("\n");
}

struct compare_nodes
{
    bool operator()(const Node *lhs, const Node *rhs) const
    {
        return (lhs->cost) > (rhs->cost);
    }
};

// Function to convert the puzzle matrix into a string
std::string stringRepresentation(int mat[N][N])
{
    std::ostringstream oss;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            oss << mat[i][j] << " ";
        }
    }
    return oss.str();
}

void solve(int initial[N][N], int x, int y, int final[N][N])
{
    auto start_time = high_resolution_clock::now(); // Record the start time

    priority_queue<Node *, vector<Node *>, compare_nodes> pq;

    unordered_set<string> visited; // Keep track of visited states

    Node *root = newNode(initial, x, y, x, y, 0, NULL);
    root->cost = calculateManhattanDistance(initial, final) + root->level;
    pq.push(root);

    while (!pq.empty())
    {
        Node *min = pq.top();
        pq.pop();

        if (min->cost == 0)
        {
            auto end_time = high_resolution_clock::now(); // Record the end time
            auto duration = duration_cast<milliseconds>(end_time - start_time);

            cout << "Goal state reached in " << steps << " steps.\n";
            cout << "Time taken: " << duration.count() << " milliseconds\n";
            DisplayPuzzle(min);
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            if (WithinLimits(min->x + row[i], min->y + col[i]))
            {
                Node *child = newNode(min->mat, min->x, min->y, min->x + row[i], min->y + col[i], min->level + 1, min);
                child->cost = calculateManhattanDistance(child->mat, final) + child->level;

                // Check if the state is not visited before
                if (visited.find(stringRepresentation(child->mat)) == visited.end())
                {
                    pq.push(child);
                    visited.insert(stringRepresentation(child->mat));
                    steps++;
                }
            }
        }
    }
}

int main()
{

    int initial[N][N];

    cout << "\n\t\t----------------------------------------------------------------------------\n";
    cout << " Enter Initial state of puzzle in this form \n";
    cout << "*** 2 3 1 5 6 0 8 4 7 ***\n>> ";

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> initial[i][j];

    cout << "initial puzzle entered is :  \n>> ";
    printPuzzle(initial);
    cout << "\n\t\t----------------------------------------------------------------------------\n";
    cout << "Puzzle is being solved  \n>> ";

    int x = 1, y = 2;

    solve(initial, x, y, final);

    return 0;
}
