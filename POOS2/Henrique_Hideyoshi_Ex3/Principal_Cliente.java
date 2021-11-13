package Henrique_Hideyoshi_Ex3;

import javax.swing.JOptionPane;

public class Principal_Cliente {
    public static void main(String[] args){
        Cliente cliente = new Cliente();
        
        float salariofinal,vendas,salariofixo;
        
        salariofixo = Float.parseFloat(JOptionPane.showInputDialog("Digite o valor do seu salario: "));
        vendas = Float.parseFloat(JOptionPane.showInputDialog("Digite o valor de suas vendas: "));
        
        salariofinal = (float) (vendas*0.04)+salariofixo;
        
        cliente.salario(salariofixo,vendas,salariofinal);
    }
    
}
