public class Prodotto {
    private String nome;
    private double prezzo;
    private int quantita;

    public String getNome(){
        return nome;
    }

    public void setNome(String nome){
        if(nome == "")
            System.err.println("Il nome non puo' essere vuoto.");
        else
            this.nome = nome;
    }

    public double getPrezzo(){
        return prezzo;
    }

    public void setPrezzo(double prezzo){
        if(prezzo<=0)
            System.err.println("Il prezzo deve essere maggiore di 0.");
        else
            this.prezzo = prezzo;
    }

    public int getQuantita(){
        return quantita;
    }

    public void setQuantita(int quantita){
        if(quantita < 0)
            System.err.println("La quantita' non puo' essere negativa.");
        else
            this.quantita = quantita;
    }
}