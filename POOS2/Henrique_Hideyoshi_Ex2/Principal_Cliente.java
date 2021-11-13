
package Henrique_Hideyoshi_Ex2;

import javax.swing.JOptionPane;


public class Principal_Cliente {
    public static void main(String[] args){
        Cliente cliente = new Cliente();
        
        float salario, porcentagem,bonus,salariofinal;
        
        salario = Float.parseFloat(JOptionPane.showInputDialog("Digite o seu salário: "));
        porcentagem = Float.parseFloat(JOptionPane.showInputDialog("Digite a porcentagem de aumento(Somente o número)"));
        porcentagem = porcentagem/100;
        bonus = porcentagem*salario;
        salariofinal = bonus+salario;
        
        
       cliente.salarioAumento(salario,porcentagem,bonus,salariofinal);         
    }
}
