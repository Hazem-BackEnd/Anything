#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string f_name, l_name;
    cin >> f_name;
    cin >> l_name;

    fstream myfile;
    myfile.open("Bio.txt", ios::app);
    myfile << f_name << "|" << l_name << endl;
    myfile.close();

    myfile.open("Bio.txt", ios::in | ios::out);
    char ch;
    while (myfile.get(ch)) {
        if (ch == '|') {
         myfile.put('*');
         myfile.put('*');
        }
    }

    myfile.close();
    return 0;
}