public class Corso {
    private String nomeCorso;
    private Studente[] studenti;

    public Corso(String nomeCorso, Studente[] studenti){
        this.nomeCorso = nomeCorso;
        this.studenti = studenti;
    }

    public String getNomeCorso(){
        return nomeCorso;
    }

    public void setNomeCorso(String nomeCorso){
        this.nomeCorso = nomeCorso;
    }

    public Studente[] getStudente(){
        return studenti;
    }

    public void setStudente(Studente[] studenti){
        this.studenti = studenti;
    }

    @Override
    public String toString(){
        return "\nNome corso: " + nomeCorso;
    }
}