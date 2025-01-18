public class Main {
    public static void main(String[] args) {
        Studente stud1 = new Studente("Massimo", 123);
        Studente stud2 = new Studente("Filippo", 456);
        Studente stud3 = new Studente("Adolfo", 123);

        System.out.println(stud1.toString());
        System.out.println(stud2.toString());
        System.out.println(stud3.toString());
        System.out.println("");

        if(stud1.equals(stud2.getMatricola())){
            System.out.println("Stud1 equals Stud2");
        }
        else
            System.out.println("Stud1 not equals Stud2");

        if(stud2.equals(stud3.getMatricola())){
            System.out.println("Stud2 equals Stud3");
        }
        else
            System.out.println("Stud2 not equals Stud3");

        if(stud1.equals(stud3.getMatricola())){
            System.out.println("Stud1 equals Stud3");
        }
        else
            System.out.println("Stud1 not equals Stud3");


        if(stud1.getMatricola() == stud2.getMatricola()){
            System.out.println("Stud1 == Stud2");
        }
        else
            System.out.println("Stud1 != Stud2");

        if(stud2.getMatricola() == stud3.getMatricola()){
            System.out.println("Stud2 == Stud3");
        }
        else    
            System.out.println("Stud2 != Stud3");

        if(stud1.getMatricola() == stud3.getMatricola()){
            System.out.println("Stud1 == Stud3");
        }
        else
            System.out.println("Stud1 != Stud3");
    }
}