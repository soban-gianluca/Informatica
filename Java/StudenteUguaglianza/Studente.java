public class Studente {
    private String nome;
    private int matricola;

    public Studente(String nome, int matricola){
        this.nome = nome;
        this.matricola = matricola;
    }

    public String getNome() {
        return nome;
    }

    public int getMatricola() {
        return matricola;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setMatricola(int matricola) {
        this.matricola = matricola;
    }

    public boolean equals(int matricola){
        boolean flag = false;

        if(this.matricola == matricola)
            flag = true;

        return flag;
    }

    @Override
    public String toString() {
        return "Nome: " + nome + ", Matricola: " + matricola;
    }
}