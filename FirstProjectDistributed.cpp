#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int m,n;
void add_matrix(double ** A , double ** B,double**C, int m, int n) {
    for (int j = 0 ; j < n ; j++){
    for (int i = 0 ; i < m ; i++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
int main() {
    cin >> m >> n;
    double** A;
    double** B;
    double** C;
    A=new (nothrow) double*[m];
    B=new (nothrow) double*[m];
    C=new (nothrow) double*[m];
    for (int i = 0; i < m; ++i) {
        A[i] = new double[n];
        B[i] = new double[n];
        C[i] = new double[n];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j]=0;
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            B[i][j]=0;
        }
    }
    auto start = high_resolution_clock::now();
    add_matrix(A, B, C, m, n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    printf("Execution time: %.4f \n", (duration.count()/1000000.0));
    return 0;
}
