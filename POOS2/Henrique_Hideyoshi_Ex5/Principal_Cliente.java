
package Henrique_Hideyoshi_Ex5;

import javax.swing.JOptionPane;

public class Principal_Cliente {
    public static void main(String[] args){
    Cliente cliente = new Cliente(); 
    
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,result;
    
    n1 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Primeiro Número: "));
    n2 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Segundo Número: "));
    n3 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Terceiro Número: "));
    n4 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Quarto Número: "));
    n5 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Quinto Número: "));
    n6 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Sexto Número: "));
    n7 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Setimo Número: "));
    n8 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Oitavo Número: "));
    n9 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Nono Número: "));
    n10 = Integer.parseInt(JOptionPane.showInputDialog("Digite o Decimo Número: "));
    
    cliente.calcSoma(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
    
    cliente.mostrarResultado();
    
    }
    
}
