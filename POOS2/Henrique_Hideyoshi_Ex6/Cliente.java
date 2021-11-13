
package Henrique_Hideyoshi_Ex6;

import javax.swing.JOptionPane;

/**
 *
 * @author Rick
 */
public class Cliente {
    
    private int num,maior=-999999999,menor=999999999;
    
    public void calcularMaiorMenor(int num){ 

    if (num > this.maior){
        this.maior = num;
    }
    if (num < this.menor){
        this.menor = num;
    }

    } 
    public int mostrarResultadoMaior(){ 
    return +this.maior;

    }
    public int mostrarResultadoMenor(){ 
    return +this.menor;
    }
    }
    