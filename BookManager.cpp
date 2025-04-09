#include<iostream>
#include<string>
#include<fstream>
#include<cstring> 
#include <limits>
using namespace std;
int main()
{
    string filename;
    cout<<"Enter the name of the file: "<<endl;
    getline(cin, filename);
    char books[10][150];
    cout<<"Enter the title of the books: "<<endl;
    for(int i=0;i<10;++i){
        cin.getline(books[i],150);
    }
    ofstream file(filename, ios::binary);
    if(!file.is_open()){
        cout<<"Could not open file."<<endl;
        return 1;
    }
    for(int i=0;i<10;++i){
        file.write(books[i],150);
    }
    file.close();
    cout << "Book titles have been written to the file." << endl;
    string searchTitle;
    cout << "Enter the title of the book to search for: ";
    getline(cin, searchTitle);
    ifstream inFile(filename, ios::binary); 
    if (!inFile.is_open()) {
        cout << "Error: Could not open the file for reading." << endl;
        return 1;
    }
    bool found = false;
    char tempTitle[150]; 
    while (inFile.read(tempTitle, 150)){
        int length = strlen(tempTitle);
        while (length > 0 && (tempTitle[length - 1] == '\0' || tempTitle[length - 1] == ' ')) {
            tempTitle[length - 1] = '\0';
            length--;
        }
        if (strcmp(searchTitle.c_str(), tempTitle) == 0){
            found = true;
            break;
        }
    }
    inFile.close();
    if (found) {
        cout << "The book title '" << searchTitle << "' was found in the file." << endl;
    } else {
        cout << "The book title '" << searchTitle << "' was not found in the file." << endl;
    }
return 0;
}