
package Henrique_Hyonemoto_Ex1;

import javax.swing.JOptionPane;

public class Cliente {
    private int nota1, nota2, nota3,peso1,peso2,peso3,media;
    
    public void mediaNotas(int nota1, int nota2, int nota3, int peso1, int peso2, int peso3,int media){
    this.nota1= nota1;
    this.nota2 = nota3;
    this.nota3 = nota3;
    this.peso1 = peso1;
    this.peso2 = peso2;                
    this.peso3 = peso3;
    this.media = media;
    
    JOptionPane.showMessageDialog(null, "A sua media final é: "+this.media);
    }
}
