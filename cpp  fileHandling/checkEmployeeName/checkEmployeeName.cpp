#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("input.txt", ios::app);
    if (!out)
    {
        cout << "File could not be opened." << endl;
    }
    else
    {
        string str;
        printf("Enter Employee name and Employee ID : ");
        getline(cin, str);
        out << endl
            << str;
    }
    out.close();
    ifstream in("input.txt");
    if (!in)
    {
        cout << "Unable to open file";
    }
    else
    {
        int flag = 0;
        cout << "Enter Employee name to search : ";
        string temp, str;
        cin >> temp;
        while (getline(in, str))
        {
            size_t found = str.find(temp);
            if (found != string::npos)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "\nEmployee Found!!" << endl;
        }
        else
        {
            cout << "\nEmployee Not Found!!" << endl;
        }
    }
}