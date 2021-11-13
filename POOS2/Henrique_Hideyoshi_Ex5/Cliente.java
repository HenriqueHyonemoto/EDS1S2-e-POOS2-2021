
package Henrique_Hideyoshi_Ex5;

import javax.swing.JOptionPane;



public class Cliente {
    
    private int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,result;
    
    public int calcSoma(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8,int n9,int n10){
        this.n1 = n1;
        this.n2 = n2;
        this.n3 = n3;
        this.n4 = n4;
        this.n5 = n5;
        this.n6 = n6;
        this.n7 = n7;
        this.n8 = n8;
        this.n9 = n9;
        this.n10 = n10;
        this.result =n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
        return result;
        
    } 
    
    public int mostrarResultado(){
        
        JOptionPane.showMessageDialog(null, "A soma dos números é "+this.calcSoma(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10));
        return 0;
        
    }

}

