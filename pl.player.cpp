


#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream buckyfile;
    buckyfile.open("God.txt");

    buckyfile<< "i love god and god loves me!\n";
    buckyfile.close();

    }