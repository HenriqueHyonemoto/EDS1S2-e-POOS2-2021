/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex8;

import javax.swing.JOptionPane;

/**
 *
 * @author Rick
 */
public class ClienteVIEW {
    public static void main(String args[]){
        try{
        ClienteDTO clienteDTO = new ClienteDTO();
        ClienteCTR clienteCTR = new ClienteCTR();        
        
        clienteDTO.setNome(JOptionPane.showInputDialog("Digite seu nome"));
        clienteDTO.setIdade(Integer.parseInt(JOptionPane.showInputDialog("Digite sua idade")));
        clienteDTO.setRG(Integer.parseInt(JOptionPane.showInputDialog("Digite seu RG")));
        
        JOptionPane.showMessageDialog(null, clienteCTR.mostrarNomeIdade(clienteDTO));
        JOptionPane.showMessageDialog(null, clienteCTR.mostrarNomeRG(clienteDTO));
        }
        catch(Exception e){
            JOptionPane.showMessageDialog(null, "Erro no sistema, Você digitou uma letra ao invés de um número inteiro!\n"
                    +e.getMessage());
        }
        
    }
}
