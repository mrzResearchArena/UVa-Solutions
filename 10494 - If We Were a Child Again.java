

import java.io.Console;
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
       BigInteger a;
       BigInteger b;
       char Op;
       while(in.hasNext()){
           a = in.nextBigInteger();
           Op = in.next().charAt(0);
           b = in.nextBigInteger();
           if(Op == '+'){
               d(a.add(b).toString());
           }
           else{
               if(Op=='-'){
                   d(a.subtract(b).toString());
               }
               else{
                   if(Op=='*'){
                       d(a.multiply(b).toString());
                   }
                   else{
                       if(Op=='/'){
                           d(a.divide(b).toString());
                       }
                       else{
                           d(a.remainder(b).toString());
                       }
                   }
               }
            }
       }
    }
}
