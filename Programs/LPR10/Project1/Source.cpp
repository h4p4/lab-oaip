#include <iostream>;
using namespace std;

void ArrayEnter(int n, int m, int a[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "] = "; cin >> a[i][j];
        }
    }
}

void ArrayOutput(int n, int m, int a[100][100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n\n";
    }
}

bool IsSquareMatrix(int n, int m)
{
    if (n == m)
    {
        return true;
    }
    else return false;
}

bool IsIdentityMatrix (int n, int m, int a[100][100])
{
    bool isTrue = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (i == j && a[i][j] != 1)
            {
                isTrue = false;
            }
            if (i != j && a[i][j] != 0)
            {
                isTrue = false;
            }
        }
    }
    return isTrue;
}

int main()
{
    int n, m;
    int a[100][100];
    cout << "Enter size of NxM matrix:\n";
    cout << "N = ";
    cin >> n;
    cout << "\nM = ";
    cin >> m;

    ArrayEnter(n, m, a);
    cout << "\nMatrix:\n";
    ArrayOutput(n, m, a);

    if (IsSquareMatrix(n, m))
    {
        cout << "Matrix is square.\n";
        if (IsIdentityMatrix(n, m, a))
        {
            cout << "Matrix is identity.\n";

        } else 
        {
            cout << "Matrix is ​​not identity.\n";
        }
    } else 
        cout << "Matrix is not square.\n";

	return 0;
}