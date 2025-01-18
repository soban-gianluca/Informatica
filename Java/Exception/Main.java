public class Main {
    public static void main(String[] args) {
        String[] arr = {null, "at", null, "b", null};

        for(int i=0; i<arr.length; i++) {
            System.out.println(arr[i]);
            try {
                System.out.println("Lunghezza: " + arr[i].length());
            } catch(NullPointerException e) {
                System.err.println("Eccezione: " + e.getMessage());
            }

            System.out.print("\n");
        }
    }
}