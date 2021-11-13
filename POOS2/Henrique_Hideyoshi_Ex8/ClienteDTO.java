/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex8;

/**
 *
 * @author Rick
 */
public class ClienteDTO {
        private String nome;
    private int rg,idade;
    
    public String getNome(){
        return nome;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }
    
    public int getRG(){
        return rg;
    }
    
    public void setRG(int rg){
        this.rg = rg;
    }
    
    public int getIdade(){
        return idade;
    }
    public void setIdade(int idade){
        this.idade = idade;
    }
}
