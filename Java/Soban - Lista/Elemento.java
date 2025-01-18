public class Elemento {
    private String valore;
    private Elemento successivo;

    public Elemento (String valore) {
        this.valore = valore;
        this.successivo = null;
    }
    public void setSuccessivo(Elemento successivo) {
        this.successivo = successivo;
    }
    public void setValore(String valore) {
        this.valore = valore;
    }
    public Elemento getSuccessivo() {
        return successivo;
    }
    public String getValore() {
        return valore;
    }
}