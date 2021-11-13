
package Henrique_Hideyoshi_Ex3;

import javax.swing.JOptionPane;

public class Cliente {
    private float salariofixo,vendas,salariofinal;
    
    public void salario(float salariofixo, float vendas,float salariofinal){
        this.salariofixo = salariofixo;
        this.vendas = vendas;
        this.salariofinal = salariofinal;

        JOptionPane.showMessageDialog(null,"Sua comissão é: "+this.vendas*0.04 + " E seu salário final é "+this.salariofinal);
    }
}
