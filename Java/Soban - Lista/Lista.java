public class Lista {
    
    private Elemento primo;

    public Lista (Elemento primo) {
        this.primo = primo;
    }

    public void push(String num) {
        Elemento elemento = new Elemento(num);
        Elemento target = primo;
        while (target.getSuccessivo() != null) 
            target = target.getSuccessivo();
        
        target.setSuccessivo(elemento);
    }

    public String pop() {
        String rimosso;
        Elemento target = primo;
        while (target.getSuccessivo() != null) 
            target = target.getSuccessivo();

        rimosso = target.getValore();
        target.setValore(null);

        return rimosso;
    }

    @Override
    public String toString() {
        Elemento target = primo;
        String lista = "";
        
        while (target.getSuccessivo() != null){
            if(target.getValore() != null){
                lista += target.getValore() + " ";
                target = target.getSuccessivo();
            }
        }

        if(target.getValore() != null)
            lista += target.getValore() + " ";
            
        return lista;
    }
}