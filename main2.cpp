#include <iostream>
#include "cstdlib"
#include "string.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int const n=5; int linha=-1;


struct salario
{
double salarioantigo[n];
double percentual[n];
double novosalario[n];
};
struct salario tabsal;



double Ler_Salario(){
	
double salarioantigo;
cout << "Qual seu salario?\n"; 
cin >> salarioantigo;	

return salarioantigo; 
	
}

double Perc_Reajuste(){
double percentual;	
cout << "Qual o percentual?\n"; 
cin >> percentual;	

return percentual;
	
}

double Novo_Salario(double salarioantigo, double percentual){

double novosalario; 

tabsal.novosalario[linha] = tabsal.salarioantigo[linha]*(tabsal.percentual[linha]/100);

	
}


void ArmazenarValores(double salarioantigo, double percentual, double novosalario) { linha++;
cin.ignore();
tabsal.salarioantigo[linha] = Ler_Salario();
tabsal.percentual[linha] = Perc_Reajuste();
tabsal.novosalario[linha] = Novo_Salario(salarioantigo, percentual);

}



void Exibir_TabelaSalario(){
	
cout << "|$" << "|%" << "|New$|\n";


 for(int i=0;i<=linha;i++)
 
 
 {
 
 cout<<"|"<<tabsal.salarioantigo[i] ;
 cout<<"|"<<tabsal.novosalario[i];
 cout<<"|"<<tabsal.percentual[i] << "|\n";

 
 }}


int main(int argc, char** argv) {
	
double salarioantigo, percentual, novosalario; 

int tecla; 
while (tecla != 3 ){
 system("clear");
 cout<<"\n1 Ler Valores \n2 Exibir tabela com valores de P e S \n3 Sair do sistema\nItem:";
 cin >> tecla;
switch (tecla) {
 case 1: 
  
  salarioantigo = Ler_Salario(); 
  percentual = Perc_Reajuste();
  Novo_Salario(salarioantigo,percentual);
   break;
 
 case 2: 
 
 Exibir_TabelaSalario(); 
 
break; 
 
 
 case 3: cout << "\nFim do programa!\n";
 getchar(); exit(0);
 
 break;

 } }	
	
	return 0;
}
