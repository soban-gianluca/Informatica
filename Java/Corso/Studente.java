public class Studente {
    private String nome;
    private int matricola;

    public Studente(String nome, int matricola){
        this.nome = nome;
        this.matricola = matricola;
    }

    public String getNome(){
        return nome;
    }

    public void setNome(String nome){
        this.nome = nome;
    }

    public int getMatricola(){
        return matricola;
    }

    @Override
    public String toString(){
        return "Nome: " + nome + " \tNumero matricola: " + matricola;
    }

}