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
int n=100;//hazem is genius!!
int main(int argc, char* argv[]) {
    int myrank , size;
    int a;
    MPI_Status status;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myrank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
     // input at first , but when i do it , it give me random number every time
    if( myrank == 0 ) /* Send a message */
    {
        cout<<"ENTER an INPUT "; cin >> a;
        MPI_Send( &a , 1 , MPI_INT, 1, 17, MPI_COMM_WORLD );
    }
    else if( myrank == 1 ) /* Receive a message */
        MPI_Recv( &a, 1, MPI_INT, 0, 17, MPI_COMM_WORLD, &status );
    MPI_Finalize ();
    return 0;
}
