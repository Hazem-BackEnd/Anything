#include <iostream>
#include <mpi/mpi.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {
    int myrank , size;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myrank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);

    if (myrank == 0) {
        printf("Processor %d of %d : My Master Node\n", myrank ,size);
    }
    else if (myrank%2 == 0) {
        printf("Processor %d of %d : My Even Worker Node\n", myrank ,size);
    }
    else {
        printf("Processor %d of %d : My Odd Worker Node\n", myrank ,size);
    }
    MPI_Finalize ();
    return 0;
}
