
package Henrique_Hyonemoto_Ex1;

import javax.swing.JOptionPane;

public class Principal_Cliente {
    public static void main(String[] args){
        Cliente cliente = new Cliente();
        
        int nota1, nota2, nota3,peso1,peso2,peso3,media ;
        
        nota1 = Integer.parseInt(JOptionPane.showInputDialog("Informe a sua Nota em Matematica: ")); 
        nota2 = Integer.parseInt(JOptionPane.showInputDialog("Informe a sua Nota em Português: ")); 
        nota3 = Integer.parseInt(JOptionPane.showInputDialog("Informe a sua Nota em Historia: ")); 
        peso1 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso da nota de Matematica ")); 
        peso2 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso da nota de Português: ")); 
        peso3 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso da nota de Historia: ")); 
        media = (nota1*peso1+nota2*peso2+nota3*peso3)/3;
        
       
        cliente.mediaNotas(nota1,nota2,nota3,peso1,peso2,peso3,media);        
    }
}
