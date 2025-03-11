#include <iostream>
#include <sstream>
#include <mpi/mpi.h>
#include <unistd.h>

using namespace std;

string NumberToString ( int Number )
{
    ostringstream ss;
    ss << Number;
    return ss.str();
}
int main(int argc, char* argv[]) {
    int myrank , size;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myrank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
    int n=8; // input at first , but when i do it , it give me random number every time
    int start=(myrank * (n/size))+1;
    int end=(myrank+1)*(n/size);
    long long sum=0;
    for (int i = start; i <= end; ++i) {
        sum+=i;
    }
    cout<<"Processor "<<myrank << " :  "<<"Sum : "<<sum<<endl;
    MPI_Finalize ();
    return 0;
}
