/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex10;


public class ClienteCTR {
    ClienteDAO clienteDAO = new ClienteDAO();
    
    public String mostrarDados(ClienteDTO clienteDTO){
        return clienteDAO.mostrarDados(clienteDTO);
    }

}
