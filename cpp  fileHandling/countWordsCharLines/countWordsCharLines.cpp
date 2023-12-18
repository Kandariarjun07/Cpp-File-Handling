#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream in("input.txt");
    int countChar = 0;
    int countWords = 0;
    int countLines = 0;
    if(!in){
        cout<<"File not found!"<<endl;
    }
    else{
        char ch;
        while(in.get(ch)){
            countChar++;
        }
        in.clear();
        in.seekg(0);
        string word;
        while(in>>word){
            countWords++;
        }
        in.clear();
        in.seekg(0);
        while(getline(in,word)){
            countLines++;
        }
    }
    cout<<"Number of characters: "<<countChar<<endl;
    cout<<"Number of words: "<<countWords<<endl;
    cout<<"Number of lines: "<<countLines<<endl;
    in.close();
}