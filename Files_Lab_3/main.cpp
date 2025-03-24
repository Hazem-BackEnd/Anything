#include <fstream>
#include <iostream>
using namespace std;
int main() {
    //Task:
    // -Take the First name and last name from the user
    // -Create a file named "Bio.txt" (u will see it in ur project (cmake-build-debug)) and write the full
    // name in it (append every name u enter)

    //
    // string f_name , l_name;
    // cin >> f_name >> l_name;
    fstream  myfile("Bio.txt" , ios::in | ios::out);
    // MyFile << f_name << " " << l_name << "|" << endl;


    //Hint: use file.put('*')
    //Open the Bio.txt file and change the first 2 characters of the last name to **
    //  without rewriting the full file

    long begin = myfile.tellg();
    myfile.seekg (0, ios::end);
    long end = myfile.tellg();
    char ch;
    if (myfile.is_open()) {
        while (!myfile.eof()) {
            if (myfile.get() == '*') {
                cout << endl;

                myfile.close();
                return 0;
            }
        }
    }
}