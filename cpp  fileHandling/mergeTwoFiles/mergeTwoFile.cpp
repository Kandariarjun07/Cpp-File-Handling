#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream first("first.txt");
    ofstream second("second.txt");
    if (!(first && second))
    {
        cout << "Error in opening file.";
    }
    else
    {
        cout << "Enter content for first file : ";
        string str;
        getline(cin, str);
        first << str << endl;
        cout << "\nEnter content for first file : ";
        getline(cin, str);
        second << str << endl;
    }
    first.close();
    second.close();
    ofstream merged("merged.txt");
    if (!merged)
    {
        cout << "Unable to open output file.";
    }
    else
    {
        // Reading from the files
        ifstream read1("first.txt"), read2("second.txt");

        char ch;
        while (read1.get(ch))
        {
            merged << ch;
        }
        while (read2.get(ch))
        {
            merged << ch;
        }
        merged.close();
        cout << "Files merged successfully.\n";
        cout << "Content of merged file : \n";
        ifstream merged("merged.txt");
        while (merged.get(ch)){
            cout << ch;
        }
        merged.close();
        read1.close();
        read2.close();
    }
}
