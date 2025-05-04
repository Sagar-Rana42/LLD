import java.util.Scanner;

public class input {
    public static void main(String [] args){
        // create a object of scanner class 
        Scanner sc = new Scanner(System.in);
        System.out.println("enter your age");
        int age = sc.nextInt();

        System.out.println("MY NAME IS " + age);

        sc.close();

    }
}


// the java garbage collector is an automatic memeory management System 
// that frees up memory 