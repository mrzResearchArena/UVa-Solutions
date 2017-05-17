

import java.math.BigInteger;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Vector;

public class Main{


    static Scanner in = new Scanner(System.in);
    static void d(Object x) {  System.out.println(x); }
    
    static BigInteger Factorial(int n){
        BigInteger result = BigInteger.ONE;
        
        for(int i=1; i<=n; i++){
            result = result.multiply(BigInteger.valueOf(i));
        }
        return result;
    }
    
    public static void main(String[] args) {
        int n;
        while(in.hasNext()){
            n = in.nextInt();
            
            d(n+"!");
            d(Factorial(n).toString());
            
        }
    }
    
}
