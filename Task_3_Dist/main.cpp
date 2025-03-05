#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream fin("/home/zemonze/CLionProjects/Task_3_Dist/Matrix.txt");
    if (!fin) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int n=4 ,m=5;
    int ** matrix = new int*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            fin >> matrix[i][j];
        }
    }
    ifstream fin1("/home/zemonze/CLionProjects/Task_3_Dist/Vector.txt");
    if (!fin1) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    int * vector = new int[m];
    for (int i = 0; i < m; ++i) {
        fin1 >> vector[i];
    }
    int * result = new int[n];
    for (int i = 0; i < n; ++i) {
        result[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
            for (int k = 0; k < m; ++k) {
                result[i] += matrix[i][k] * vector[k];
            }
    }

    ofstream MyFile("/home/zemonze/CLionProjects/Task_3_Dist/Output.txt");
    for (int i = 0; i < n; ++i) {
        MyFile << result[i] << endl;
    }
    fin.close();
    fin1.close();
    MyFile.close();
    return 0;
}

// (fin >> num) <===> assign every integer into

// Matrix - Vector Multiplication is same as matrix multi.
// N x M  * M x 1 ==> N x 1