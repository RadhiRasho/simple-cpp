// Simple Game of Adding Two Numbers Together In C++
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool again = true;
    int x = 0, y = 0;

    do
    {
        string choice = "";
        cout << "Enter Two Numbers To Add Together: ";
        cin >> x;
        cin >> y;

        int sum = x + y;

        cout << "The Sum Is: " << sum << endl;

        cout << "Wanna Go Again (Y/N)? " << endl;

        cin >> choice;

        transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
        if (choice == "N" || choice == "NO")
        {
            again = false;
        }
    } while (again == true);
    return 0;
}
