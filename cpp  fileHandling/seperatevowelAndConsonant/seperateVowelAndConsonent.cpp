#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file1("file1.txt");
    if (!file1)
    {
        cout << "Unable to open the file";
    }
    else
    {
        string str;
        cout << "Enter content for file : \n";
        getline(cin, str);
        file1 << str;
    }
    file1.close();
    ifstream getFile("file1.txt");
    if (!file1)
    {
        cout << "File not found.";
    }
    else
    {
        ofstream vowel("vowels.txt");
        ofstream consonant("consonents.txt");
        char ch;
        while (getFile.get(ch))
        {
            if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
            {
                vowel << ch;
            }
            else if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
            {
                consonant << ch;
            }
        }
        cout << "Vowel and Consonents seperated successfully.\n";
        getFile.close();

        vowel.close();
        consonant.close();
    }
}
