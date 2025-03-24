#include <iostream>
#include <sstream>
#include <mpi/mpi.h>
#include <unistd.h>
using namespace std;
int main(int argc, char* argv[]) {
    int myrank , size;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myrank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);


    MPI_Finalize();
    return 0;
}