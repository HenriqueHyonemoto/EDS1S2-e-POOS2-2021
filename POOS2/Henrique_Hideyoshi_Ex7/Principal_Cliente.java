
package Henrique_Hideyoshi_Ex7;
import javax.swing.JOptionPane;
public class Principal_Cliente {
    public static void main(String args[]){
        Cliente cliente = new Cliente();
        
        String letra;
        
        do{
            letra = JOptionPane.showInputDialog("Digite algumas letras e digite zero para parar");
            
            cliente.verificarletras(letra);
            
        }while (!"0".equals(letra));
       
        cliente.mostrarresultado();
         
    }
}
