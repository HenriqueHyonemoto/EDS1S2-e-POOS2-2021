
#include "newClass.h"
#include <cstdlib>
#include <iostream>

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig) {
}

newClass::~newClass() {
}

void newClass::input(){
    
    for (int i=0; i<2; i++){
    cout<<"Digite o nome do aluno: "<<endl;
    cin>>this->DadosAlunos[i].nome; 
    cout<<"Digite a matricula do aluno: "<<endl;
    cin>>this->DadosAlunos[i].matricula; 
    cout<<"Digite a nota em matematica: "<<endl;
    cin>>this->DadosAlunos[i].n1; 
    cout<<"Digite a nota em historia: "<<endl;
    cin>>this->DadosAlunos[i].n2; 
        }
    
    }

void newClass::calc(){
        for (int i=0; i<2; i++){
            cout <<"Nome do aluno: "<<DadosAlunos[i].nome<<endl;
            cout <<"Numero da matricula: "<<DadosAlunos[i].matricula<<endl;
            cout <<"Media final: "<<((DadosAlunos[i].n1+DadosAlunos[i].n2)/2)<<endl;
        }
        
}