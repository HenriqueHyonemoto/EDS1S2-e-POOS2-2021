package Henrique_Hideyoshi_Ex6;

import javax.swing.JOptionPane;


public class Principal_Cliente {
    public static void main(String[] args){
        Cliente cliente = new Cliente();
        
    int num,i;
    
    for (i=0;i<10;i++){
        num = Integer.parseInt(JOptionPane.showInputDialog("Digite o numero da "+(i+1) +"º Posição"));
    
        cliente.calcularMaiorMenor(num);

        }
    

    
    JOptionPane.showMessageDialog(null, "Maior: "+cliente.mostrarResultadoMaior()
    );
    JOptionPane.showMessageDialog(null, "Menor: "+cliente.mostrarResultadoMenor()
    );
    
    }
}
    
   