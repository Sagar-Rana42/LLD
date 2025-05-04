public class exceptionHandling {
    public static void main(String[] args) {
        class codeException extends Exception{
            public codeException(String message){
                super(message);
            }
        }
        // int num = 10/0; // arithematic error or ArithmeticException
        // System.out.println("hii");

        // int arr[] = {10,20,30};
        // System.out.println(arr[10]); // out of bound error or java.lang.ArrayIndexOutOfBoundsException
        /*
        try {
            // int num = 10/0;
            int arr[] = {10,20,30};
            System.out.println(arr[20]);
        } 
        catch(Exception e){
            // it handle all type of exceptions 
            System.out.println(e);
            System.out.println("error in = "+e);
        }
        finally{
            System.out.println("ecexuted");
        }
             */

        /* custom exception handling 
        int code = 400;
        
        try {
            if(code == 400){
                throw new codeException("Data not found");
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
        }
        */
        
        // +++++ is there any case wher finally does not execute

        // system.exit()

        // throws keyword give error

    }
}
