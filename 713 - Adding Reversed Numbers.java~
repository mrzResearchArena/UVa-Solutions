

import java.math.BigInteger;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
import java.util.Arrays;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;

public class Main {

    static void d(Object x) {  System.out.println(x);  }
    static Scanner in = new Scanner(System.in);
    
    static  BigInteger Reversed(BigInteger n){
        BigInteger rev = BigInteger.ZERO;
        while(!n.equals(BigInteger.ZERO)){
            rev = rev.multiply(BigInteger.TEN).add(n.remainder(BigInteger.TEN));
            n = n.divide(BigInteger.TEN);
        }
        return rev;
    }

    public static void main(String[] args) {
       int N; N = in.nextInt();
       int i=1;
       while(i<=N){
           BigInteger a = in.nextBigInteger();
           BigInteger b = in.nextBigInteger();
           a = Reversed(a);
           b = Reversed(b);
           
           BigInteger C;
           C = Reversed(a.add(b));
           d(C.toString());
           
           i++; /// এটা না দিলে Runtime Error হবে ।
       }
    }
}

