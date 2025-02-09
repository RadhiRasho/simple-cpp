#include <iostream>
#include <vector>

using namespace std;

vector<int> leftPad(vector<int> &nums, int n)
{
    vector<int> res(n, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        res[n - nums.size() + i] = nums[i];
    }
    return res;
}

vector<int> rightPad(vector<int> &nums, int n)
{
    vector<int> res(n, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        res[i] = nums[i];
    }
    return res;
}

vector<int> add(vector<int> &a, vector<int> &b)
{
    vector<int> res(a.size(), 0);
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        res[i] = a[i] + b[i] + carry;
        carry = res[i] / 10;
        res[i] %= 10;
    }
    return res;
}

vector<int> makeNextRow(vector<int> &prevRow)
{
    vector<int> nextRow(prevRow.size() + 1, 0);
    vector<int> left = leftPad(prevRow, prevRow.size() + 1);
    vector<int> right = rightPad(prevRow, prevRow.size() + 1);
    for (int i = 0; i < nextRow.size(); i++)
    {
        nextRow[i] = left[i] + right[i];
    }
    return nextRow;
}

vector<int> pascalTriangle(int n)
{
    vector<int> res;
    if (n == 0)
    {
        return res;
    }
    res.push_back(1);
    for (int i = 1; i < n; i++)
    {
        res = makeNextRow(res);

        for (const int &num : res)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return res;
}

int main()
{
    cout << "Hello, Triangle!" << endl;
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;
    vector<int> triangle = pascalTriangle(n);
    for (const int &num : triangle)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}