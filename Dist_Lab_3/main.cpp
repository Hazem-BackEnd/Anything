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
int i=0;
int main(int argc, char* argv[]) {
    int myrank , size;
    MPI_Init (&argc, &argv);
    MPI_Comm_rank (MPI_COMM_WORLD, &myrank);
    MPI_Comm_size (MPI_COMM_WORLD, &size);
    string temp="";
    int count=0;
    if (myrank == 0){i=1;}
    else{i=myrank*5+1;}
    while (count<5) {
        temp.append(NumberToString(i));
        temp+=" ";
        i++;
        count++;
    }
    cout<<"Processor " << myrank << " display : "<<temp<<endl;
    MPI_Finalize ();
    return 0;
}
