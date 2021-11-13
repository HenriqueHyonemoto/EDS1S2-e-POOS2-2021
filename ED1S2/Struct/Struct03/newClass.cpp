
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
    for (int i=0;i<2;i++){
    cout<<"Digite seu nome: "<<endl;
    cin>>PesquisarPessoas[i].nome;
    cout<<"Digite seu cpf: "<<endl;
    cin>>PesquisarPessoas[i].cpf;
    }
}

void newClass::sequencial(){
    cout<<"Busca Sequencial: "<<endl;
    int procpf;
    cout<<"Digite o cpf da pessoa: "<<endl;
    cin>>procpf;
    for (int i=0;i<3;i++){
        if (procpf == PesquisarPessoas[i].cpf){
        cout<<PesquisarPessoas[i].nome<<endl;    
        }
    }
}
int newClass::binaria(){
    cout<<"Busca Binaria: "<<endl;
    int procpf,inicio = 0,meio,fim = 2;
    cout<<"Digite o cpf da pessoa: "<<endl;
    cin>>procpf;
    do{
        meio = inicio + (fim - inicio)/2;
        if (procpf < PesquisarPessoas[meio].cpf){
            fim = meio - 1;
        }
        else if (procpf > PesquisarPessoas[meio].cpf){
            inicio = meio + 1;
        }
        else return meio;
    }while (inicio <=fim ); 
 
}

void newClass::mostrarpessoa(){
    cout<<PesquisarPessoas[binaria()].nome<<endl; 
}

