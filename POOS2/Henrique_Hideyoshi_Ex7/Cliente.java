/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex7;

import javax.swing.JOptionPane;

public class Cliente {
    private String letra;
    int vogal,consoante,a,e,i,o,u;
   
    public void verificarletras(String letra){
        if ("a".equals(letra)){
        this.a = this.a+1;
        this.vogal = this.vogal+1;
        }
        if ("e".equals(letra)){
        this.e = this.e+1;
        this.vogal = this.vogal+1;
        }
        if ("i".equals(letra)){
        this.i = this.i+1;
        this.vogal = this.vogal+1;
        }
        if ("o".equals(letra)){
        this.o = this.o+1;
        this.vogal = this.vogal+1;
        }
        if ("u".equals(letra)){
        this.u = this.u+1;
        this.vogal = this.vogal+1;
        }
        if (!"a".equals(letra) && !"e".equals(letra) && !"i".equals(letra) && !"o".equals(letra) && !"u".equals(letra) && !"0".equals(letra)){
        this.consoante = this.consoante+1;
        }

        
    }
    
    public void mostrarresultado(){    
    JOptionPane.showMessageDialog(null, "Quantidade de 'a': "+this.a+" Quantidade de 'e': "+this.e+" Quantidade de 'i': "+this.i+" Quantidade de 'o': "+this.o+" Quantidade de 'u': "+this.u);    
    JOptionPane.showMessageDialog(null, "Número de vogais: "+this.vogal+" Número de Consoantes: "+this.consoante);
}
}
