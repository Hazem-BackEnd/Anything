#include <fstream>
#include <iostream>
#include <unistd.h>


/*
     Task 1
          -Create a text file with the following content
               4test5name12id
          -Read The file content and display the fields
               i.e: test name1 id
     Task 1 (continue)
          -Take fields from user and write it with the same format in the text file field_length field
          (take inputs from user , instead of write at a file , and test on string length > 12)

     Task Bonus
          -index in another file (see page 152 in our Files Reference)
 */
using namespace std;
int main() {
     //Task Today in front of u , its Wrong due to test case when line.length() >=10
     fstream  file;
     file.open("Reading.txt" ,ios::in | ios::binary | ios::out);
     while (true) {
          string line;
          cin >> line;
          if (line == "exit") break;
          file << line.length();
          file<<line;
     }
     file.close();
     file.open("Reading.txt" ,ios::in | ios::out | ios::binary );
     fstream Indexing;
     Indexing.open("Indexing.txt" ,ios::in | ios::out | ios::binary);
     int num;
     int i=0;
     while (file>> num) {
          if (i==0) Indexing<<i<<" ";
          else Indexing<<i+1<<" ";
          for (int j = 0; j < num; ++j) {
               char c;
               file>>c;
               i++;
          }
     }
     Indexing.close();
     file.close();
     return 0;
}