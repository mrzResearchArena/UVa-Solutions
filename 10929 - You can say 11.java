
import java.math.BigInteger;
import java.util.Scanner;

public class Main{


    static Scanner in = new Scanner(System.in);
    public static void d(Object x) {  System.out.println(x); }
    
    public static void main(String[] args) {
        BigInteger n;
        String s;
        
        while(true){
        
            s = in.nextLine();     // Input : String আকারে হবে ।
            n = new BigInteger(s); // এখানে, Convert করতে হবে ।
            
            
            if(n.equals(BigInteger.ZERO)){
                break;
            }
            else{
                BigInteger result;
                result = n.mod(BigInteger.valueOf(11));
                
                if(result.equals(BigInteger.ZERO)){
                    d(s +" is a multiple of 11.");     /// অবশই, String এ' দেখাতে হবে ।
                }
                else{
                    d(s +" is not a multiple of 11.");
                }
            }
        }
   
    }
}
