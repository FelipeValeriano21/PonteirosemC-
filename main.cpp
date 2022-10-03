#include <iostream>
#include <cmath>
using namespace std;

double const pi = 3.14;

double LerLadoA(){
    
    double A;
    double *ptA;
    cout << "Digite o valor do lado A\n"; 
    cin >> A; 
    return A;
    
}


double LerLadoB(){
    
    double B;
    double *ptB;
    cout << "Digite o valor do lado B\n"; 
    cin >> B; 
    return B;
    
}


double LerLadoC(){
    
    double C;
    double *ptC;
    cout << "Digite o valor do lado C\n"; 
    cin >> C; 
    return C;
    
}

double Calcula_Perimetro(double *ptA, double *ptB, double *ptC){

double P; 
double *ptP; 

P = ((*ptA) + (*ptB) + (*ptC))/2; 

  cout<< "\nPerimetro do triangulo e :" << P << endl;
    
return P;     
    
}



void Calcula_Heron(double *ptA, double *ptB, double *ptC, double *ptP){
    
    double H;
  
 H = sqrt((*ptP)*((*ptP)-(*ptA)) * ((*ptP)-(*ptB)) * ((*ptP)-(*ptC))); 
  
    cout<< "\nA area do triangulo de Heron e :" << H << endl;
    
    
}


int main(){
    int op; 
    double A,*ptA,B,ptB,C,ptC, P, PtP; 
    
MENU:
system ("clear");
 cout << "\nMenu do programa\n1 - Executar\n2 - Sair\nEscolha:";
 cin >> op;
switch(op)
 {
 case 1: 
 
 
 
 A = LerLadoA(); 
 B = LerLadoB();
 C = LerLadoC();
 P = Calcula_Perimetro(&A, &B, &C); 
 Calcula_Heron(&A, &B, &C, &P); 
 
 break;
 case 2: cout << "\nVoce escolheu sair - Fim do programa!\n";
 getchar(); exit(0);
 break;
 }
return 0;    
    
    
}
