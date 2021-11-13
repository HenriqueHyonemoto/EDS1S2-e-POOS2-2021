/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex10;



/**
 *
 * @author Rick
 */
public class ClienteDAO {
    public String mostrarDados(ClienteDTO clienteDTO){
        return "Seu codigo é: "+clienteDTO.getCod()+"\nO seu telefone é: "+clienteDTO.getTel();
    }
}
