#ifndef BANCO_DADOS_H_INCLUDED     //the purpose of this library is to use the functions for variables of type, string, int and float, to store the results in fixed memory.
#define BANCO_DADOS_H_INCLUDED
#include <iostream>                //these are the libraries used to build the algorithm, iostream for the basic functions of c ++, fstream for sending and reading.txt files in order to store the data in physical memory, and the string for converting string / int or string / float
#include <fstream>
#include <string>
using namespace std;

//the INT NUM is the value and STRING VAR is the name of variables


void inteiros(int num, string var){ //inteiros function, which you send to inteiros.txt variables type int.

     ofstream arquivos;
     arquivos.open("inteiros.txt",ios::app);
     arquivos<<var<<endl;
     arquivos<<num<<endl;
     arquivos.close();
}

void flutuantes(float num, string var){ //flutuantes function, which you send to flutuantes.txt variable type float.

     ofstream arquivos;
     arquivos.open("flutuantes.txt",ios::app);
     arquivos<<var<<endl;
     arquivos<<num<<endl;
     arquivos.close();
}

void caracteres(string num, string var){ //caracteres function, which you send to caracteres.txt variables type string.

     ofstream arquivos;
     arquivos.open("caracteres.txt",ios::app);
     arquivos<<var<<endl;
     arquivos<<num<<endl;
     arquivos.close();
}

//the functions of reading heve return,can use as a variable or assign it to a variable
//the STRING VAR is the name of variable tha you send to fixed memories.


int LeituraInteiros(string var){ //LeituraInteiros function, reading of inteiros.txt for using the variables and you value.

    ifstream entrada;
    string linha;
    int chave=0;
    int numero;

        entrada.open("inteiros.txt");
        if(entrada.is_open()){
           while(getline(entrada,linha)){
                if(chave==1){
                   numero=stoi(linha);
                   return numero;
                   chave=0;
                            }
                if(linha==var){
                  chave=1;
                  }
                                        }
}
     entrada.close();
}

float LeituraFlutuantes(string var){ //LeituraFlutuantes function, reading of flutuantes.txt for using the variables and you value.

    ifstream entrada;
    string linha;
    int chave=0;
    float numero;

        entrada.open("flutuantes.txt");
        if(entrada.is_open()){
           while(getline(entrada,linha)){
                if(chave==1){
                   numero=stof(linha);
                   return numero;
                   chave=0;
                            }
                if(linha==var){
                  chave=1;
                  }
 }                                       }
     entrada.close();
}

string LeituraCaracteres(string var){ //LeituraCaracteres function, reading of caracteres.txt for using the variables and you value.

    ifstream entrada;
    string linha;
    int chave=0;

        entrada.open("caracteres.txt");
        if(entrada.is_open()){
           while(getline(entrada,linha)){
                if(chave==1){
                   return linha;
                   chave=0;
                            }
                if(linha==var){
                  chave=1;
                  }
                                        }
}
     entrada.close();
}


#endif
