#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <string>

#include "func.cpp"

using namespace std;

int main(int argc, char* argv[]){

    ifstream archivo_entrada;
    string matrices;
    archivo_entrada.open("Matrices.txt",ios::in);     //Abrir archivo

    while(!archivo_entrada.eof()){
        getline(archivo_entrada,matrices);
        limpiar(matrices);
        matrices.clear();
    }
    archivo_entrada.close();
    return 0;
}
