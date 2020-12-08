#include <iostream>
#include "banco_dados.h" //the banco_dados.h library that was created
using namespace std;

int main(){

         int num1=10;
         float num2=10.1;
         string name="banco_dados";

         inteiros(num1,"num1");
         flutuantes(num2,"num2");
         caracteres(name,"name");

         int rnum1=LeituraInteiros("num1");
         float rnum2=LeituraFlutuantes("num2");
         string rname=LeituraCaracteres("name");

         cout<<"int:.........."<<rnum1<<endl;
         cout<<"float:........"<<rnum2<<endl;
         cout<<"string:......."<<rname;


return 0;
}

