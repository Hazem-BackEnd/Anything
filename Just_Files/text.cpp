#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
 *
Task:
 -Take the First name and last name from the user
 -Create a file named "Bio.txt" (u will see it in ur project (cmake-build-debug)) and write the full
 name in it (append every name u enter)

Open the Bio.txt file and change the first 2 characters of the last name to *
 without rewriting the full file
   Hint: use file.put('*')
   EX: Hazem|Mostafa =====> Hazem|**stafa
*/
int main() {
    string f_name, l_name;
    cin >> f_name;
    cin >> l_name;
    fstream myFile;
    myFile.open("Bio.txt", ios::app);
    myFile << f_name<<"|"<<l_name<<endl;
    myFile.close();

    myFile.open("Bio.txt", ios::in | ios::out);
    char ch;
    while (myFile.get(ch)) {
        if (ch=='|') {
            myFile<<"**";
        }
    }
    myFile.close();
    return 0;
}