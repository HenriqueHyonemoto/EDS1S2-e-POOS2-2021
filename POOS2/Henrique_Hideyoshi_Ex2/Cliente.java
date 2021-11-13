
package Henrique_Hideyoshi_Ex2;

import javax.swing.JOptionPane;

public class Cliente {
    private float salario,porcentagem,salariofinal, bonus; 
    
    public void salarioAumento(float salario, float porcentagem,float bonus, float salariofinal){
    this.salario = salario;
    this.porcentagem = porcentagem;
    this.salariofinal = salariofinal;
    this.bonus = bonus;
    
    JOptionPane.showMessageDialog(null,"O salário final é: "+this.salariofinal);  
    
    }
}
