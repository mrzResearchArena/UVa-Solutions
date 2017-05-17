
import java.util.*;
import java.lang.*;
import java.math.*;

public class Main
{

    public static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {

        int n;
        while (true)
        {            
            n = in.nextInt();
            
            BigInteger fact;
            String s;
            
            if(n == 0) break;
            else
            {
                fact = factorial(n);
                s = String.valueOf(fact);
            }
            System.out.println(n + "! --");
            SEND(s);
        }

    }
    
    static BigInteger factorial(int n)
    {
        BigInteger result = BigInteger.ONE;
        for(int i=1; i<=n; i++){
            result = result.multiply(BigInteger.valueOf(i));
        }
        return result;
    }
    
    static void SEND(String s){
        
        int Counter_0 = 0;
        int Counter_1 = 0;
        int Counter_2 = 0;
        int Counter_3 = 0;
        int Counter_4 = 0;
        int Counter_5 = 0;
        int Counter_6 = 0;
        int Counter_7 = 0;
        int Counter_8 = 0;
        int Counter_9 = 0;
        
        for(int i=0; i<s.length(); i++){
            
            if(s.charAt(i) == '0'){
                Counter_0 ++;
            }
            else if(s.charAt(i) == '1'){
                Counter_1 ++;
            }
            else if(s.charAt(i) == '2'){
                Counter_2 ++;
            }
            else if(s.charAt(i) == '3'){
                Counter_3 ++;
            }
            else if(s.charAt(i) == '4'){
                Counter_4 ++;
            }
            else if(s.charAt(i) == '5'){
                Counter_5 ++;
            }
            else if(s.charAt(i) == '6'){
                Counter_6 ++;
            }
            else if(s.charAt(i) == '7'){
                Counter_7 ++;
            }
            else if(s.charAt(i) == '8'){
                Counter_8 ++;
            }
            else if(s.charAt(i) == '9'){
                Counter_9 ++;
            }
        }
        
        System.out.println("(0)  "+Counter_0+"  (1)  "+Counter_1+"  "+"(2)  "+Counter_2+"  "+"(3)  "+Counter_3+"  "+"(4)  "+Counter_4);
        System.out.println("(5)  "+Counter_5+"  (6)  "+Counter_6+"  "+"(7)  "+Counter_7+"  "+"(8)  "+Counter_8+"  "+"(9)  "+Counter_9);
        
    }

}

