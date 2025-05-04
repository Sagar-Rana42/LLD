public class customErrorHandling {
    public static void main(String[] args) {
        class codehandling extends Exception {
            public codehandling(String message , int code ){
                super(message);
                
            }
            
        }

        // custom exception handling 

        int code = 500;
        
        try {
            if(code == 400){
                throw new codehandling("Data not found",400);
            }
            else if(code == 500){
                throw new codehandling("internal server error",500);
            }
        } catch (Exception e) {
            // TODO: handle exception
            System.out.println(e.getMessage());
            // System.out.println(e.getStackTrace());
        }
        
    
    }
}
