In Arithmatic :
_______________
let,
      b = 5, p = 2, m = 7;
      
      (I) 5 % 2 = 1;
      (II) 5^2 % 7 = 4; 

In C++ :
________
 (I) int b = 5; int p = 2;
     int result = b % p;
    
(II) int result = power(b, p) % m;


In Java :
_________
 (I) int b = 5; int p = 2;
     int result = b.mod(p);
    
(II) BigInteger result = b.modPow(p, m);

__________________________________________________________________


import java.math.*;
import java.util.*;


public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger B ;
        BigInteger P ;
        BigInteger M ;
        while(input.hasNext()){
            B = input.nextBigInteger();
            P = input.nextBigInteger();
            M = input.nextBigInteger();
            
            System.out.println(B.modPow(P, M).toString());
        }
    }
    
}
 
