/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Henrique_Hideyoshi_Ex8;

/**
 *
 * @author Rick
 */
public class ClienteDAO {
    public String mostrarNomeRG(ClienteDTO clienteDTO){
        return "O seu nome é: "
                +clienteDTO.getNome() + "\nO seu RG é: "+
                +clienteDTO.getRG();
    }
    public String mostrarNomeIdade(ClienteDTO clienteDTO){
        return "O seu nome é: "
                +clienteDTO.getNome() + "\nA sua idade é: "+
                +clienteDTO.getIdade();
    }
    
}
