
package Henrique_Hideyoshi_Ex4;

import javax.swing.JOptionPane;

public class PrincipalCliente {
    public static void main(String[] args){
      Cliente cliente = new Cliente();
      
      float amostra;
      
      JOptionPane.showMessageDialog(null, 
              cliente.calcAmostra(Float.parseFloat(JOptionPane.showInputDialog("Digite a pontuação de agua presente na amostra: "))));
      
      
      
    }
    
}
