#include <iostream>
#include <fstream>
#include <cctype> // For toupper and tolower functions
using namespace std;

int main()
{
    

    ifstream inputFile("input.txt");
    if (!inputFile)
    {
        cout << "Unable to open input file." << endl;
        return 1;
    }

    ofstream outputFile("output.txt");
    if (!outputFile)
    {
        cout << "Unable to create output file." << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch))
    {
        if (islower(ch))
        {
            ch = toupper(ch);
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
        }
        outputFile << ch;
    }

    inputFile.close();
    outputFile.close();

    cout << "File copied with case changed successfully." << endl;
    return 0;
}
