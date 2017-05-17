

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

    public static void main(String[] args) {
       BigInteger sum = BigInteger.ZERO;
       BigInteger inputs ;
       int C=0;
       while(in.hasNext()){
           
           int N = in.nextInt();
           int F = in.nextInt();
           
           if(N==0 || F==0) {
               break;
           }
           
           int i=1;
           while(i<=N){
               //sum = sum + am;
               inputs = in.nextBigInteger();
               sum = sum.add(inputs);
               i++;
           }
           BigInteger every = sum.divide(BigInteger.valueOf(F));
           
           // 
           C ++;
           d("Bill #"+C+" costs "+sum.toString()+": each friend should pay "+every.toString()+"\n");
           sum = BigInteger.ZERO;
       }
    }
}

