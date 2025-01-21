#include <chrono>
#include <iostream>
#include <mpi.h>
#include <Epetra_MpiComm.h>

int main() {
    // Init MPI
    MPI_Init(NULL, NULL);
    Epetra_MpiComm comm(MPI_COMM_WORLD);
    std::cout << comm.MyPID() << std::endl;
    MPI_Finalize();
    return 0;
}
