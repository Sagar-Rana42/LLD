public class wrapperClass {
    public static void main(String[] args) {

        // convert int to object 
        /*        int num = 5;
        int ouble = 10;

       
        // Integer  n = Integer.valueOf(num);
        Integer m = num;
        System.out.println(m+1);
        */

        Integer number = 5;
        if(number instanceof Integer){
            System.out.println("yes it is int object ");
        }

        // wrapper object -> number , is ready 

        // convert integer object to primitive 
        int num = number;
        

    }
}
