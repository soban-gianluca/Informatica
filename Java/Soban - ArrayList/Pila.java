import java.util.ArrayList;

public class Pila {
    private ArrayList<Integer> pila = new ArrayList<>();

    public Pila() {}

    public void push(int num){
        int dim = pila.size();
        pila.add(dim, num);
    }
    
    public int pop(){
        int risultato = 1;
        int dim = pila.size();

        if(dim > 0){
            risultato = pila.get(dim-1);
            pila.remove(dim-1);
        }

        return risultato;
    }

    @Override
    public String toString() {
        String num="";
        
        for(int n : pila)
            num += n + " ";

        return num; 
    }
}