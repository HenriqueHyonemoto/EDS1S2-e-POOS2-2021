
#include "newClass.h"
#include <iostream>
#include <cstdlib>

using namespace std;

newClass::newClass() {
}

newClass::newClass(const newClass& orig){
}

newClass::~newClass(){
}

void newClass::input(){
    for (int i=0;i<3;i++){
    cout <<"Digite o nome do produto: "<<endl;
    cin >> CadastrarProduto[i].nome;
    cout <<"Digite o codigo do produto: "<<endl;
    cin >> CadastrarProduto[i].id;
    cout <<"Digite o preço do produto: "<<endl; 
    cin >> CadastrarProduto[i].preco;
    } 
}

void newClass::procurarproduto(){
  int cod,i;
  cout <<"------Procurar Produtos------"<<endl;  
  cout <<"Digite o codigo do produto: "<<endl;
  cin >> cod;
  for (int i=0;i<3;i++){
    if (cod == CadastrarProduto[i].id){
    cout <<"Nome do produto: "<<CadastrarProduto[i].nome<<endl;
    cout <<"Preço: R$:"<<CadastrarProduto[i].preco<<endl;  
    }
  }
}