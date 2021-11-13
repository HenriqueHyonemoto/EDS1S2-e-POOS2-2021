#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    for(int i=0;i<3;i++){
        int deposito;
    cout <<"Digite seu nome: "<<endl;
    cin>>CadastrarCliente[i].nome;
    cout <<"Digite seu cpf: "<<endl;
    cin>>CadastrarCliente[i].cpf;
    cout <<"Digite o valor de deposito: "<<endl;
    cin >> deposito;
    CadastrarCliente[i].saldo = CadastrarCliente[i].saldo+deposito;
    }
    
}

void newClass::transferencias(){
    int tempcpf;
    char tipo;
    float deposito,saque;
    cout<<"Digite o seu cpf"<<endl;
    cin>>tempcpf;
    for(int i=0;i<3;i++){
        if (tempcpf == CadastrarCliente[i].cpf){
            cout <<"Saldo disponivel: "<<CadastrarCliente[i].saldo<<endl;
            cout <<"Deseja realizar um deposito ou saque? ('d' para deposito e 's' para saque"<<endl;
            cin >>  tipo;
            if (tipo == 'd'){
               cout <<"Digite o valor de deposito: "<<endl;
               cin >> deposito; 
               CadastrarCliente[i].saldo = CadastrarCliente[i].saldo+deposito;
               cout <<"saldo da conta de: "<<CadastrarCliente[i].nome<<endl;
               cout <<"R$ "<<CadastrarCliente[i].saldo<<endl;
            }
            else if (tipo == 's'){
               cout <<"Digite o valor de saque: "<<endl;
               cin >> saque;
               if (saque > CadastrarCliente[i].saldo){
                   while (saque > CadastrarCliente[i].saldo){
                    cout <<"Valor invalido, tente novamente"<<endl;
                    cin >> saque;
                   }
               }
               CadastrarCliente[i].saldo = CadastrarCliente[i].saldo-saque;
               cout <<"saldo da conta de: "<<CadastrarCliente[i].nome<<endl;
               cout <<"R$ "<<CadastrarCliente[i].saldo<<endl;
            }
    }
}
}

