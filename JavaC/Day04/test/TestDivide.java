import java.io.IOException;

class InvalidDivideException  extends Exception  
{  
    public InvalidDivideException (String str)  
    {  
        // calling the constructor of parent Exception  
        super(str);  
    }  
}  
    
// class that uses custom exception InvalidAgeException  
 class TestDivide  
{  
  
    // method to check the divide  
    static void validate (int num) throws InvalidDivideException{    
       int x =5 ;
	   if(num == 0){  
  
        // throw an object of user defined exception  
        throw new InvalidDivideException("we can not divide on zero ");    
    }  
       else {   
        System.out.println("the division will be "+(x /num));   
        }   
     }    
  
    // main method  
    public static void main(String args[])  
    {  
        try  
        {  
            // calling the method   
            validate(0);  
        }  
        catch (InvalidDivideException ex)  
        {  
            System.out.println("Caught the exception");  
    
            // printing the message from InvalidAgeException object  
            System.out.println("Exception occured: " + ex);  
        }  
  
        System.out.println("rest of the code...");    
    }  
}