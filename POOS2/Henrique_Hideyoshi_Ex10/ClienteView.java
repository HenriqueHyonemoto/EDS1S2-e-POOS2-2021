/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex10;

import javax.swing.JOptionPane;


public class ClienteView {
    public static void main(String args[]){
        try{
            ClienteDTO clienteDTO = new ClienteDTO();
            ClienteCTR clienteCTR = new ClienteCTR();
            
            clienteDTO.setCod(Integer.parseInt(JOptionPane.showInputDialog("Informe seu Código: ")));
            clienteDTO.setTel(Integer.parseInt(JOptionPane.showInputDialog("Informe seu telefone: ")));
            
            JOptionPane.showMessageDialog(null, clienteCTR.mostrarDados(clienteDTO));   
        }
        catch(Exception e){
            JOptionPane.showMessageDialog(null, "Erro, Você digitou uma quantidade invalida de números "+e.getMessage());
        }
    }
}
