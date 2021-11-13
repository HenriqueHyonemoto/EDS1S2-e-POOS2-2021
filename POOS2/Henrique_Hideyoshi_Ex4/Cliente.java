
package Henrique_Hideyoshi_Ex4;

import javax.swing.JOptionPane;

public class Cliente {
    private float amostra;
    private String tipo;
    
    
    public String calcAmostra(float amostra){
        
      if (amostra <= 10){
          this.tipo = "A amostra é: Rochosa";
      }
      else if (amostra > 10 && amostra <= 40){
          this.tipo = "A amostra é: Firme";
      }
      else if (amostra > 40 && amostra <= 80){
          this.tipo = "A amostra é: Pantanosa";
      }
      else if (amostra > 80){
          this.tipo = "Quantidade de agua invalida.";
      }
      return this.tipo;
    }
}
