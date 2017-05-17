

import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;

public class Main
{
    static Scanner in = new Scanner(System.in);
    
    public static void main(String[] args) {
        
        int print = 0;
        
        BigInteger n;
        while(in.hasNext())
        {
            if(print != 0) System.out.println();   // এই দু'টা লাইন অনেক গুরুত্বপূর্ণ ...
            print = 1;
            
            n = in.nextBigInteger();
            int C=0;
            
            if(isLeapyear(n)){
                System.out.println("This is leap year."); C++;
            }
            
            if(isHuluculu(n)){
                System.out.println("This is huluculu festival year."); C ++;
            }
            
            if(isBulukulu(n)){
                System.out.println("This is bulukulu festival year."); C++;
            }
            
            if(C == 0){
                System.out.println("This is an ordinary year.");
            }
            
        }
        
    }
    
    static boolean isLeapyear(BigInteger n) {
        
        if(n.mod(BigInteger.valueOf(400)).equals(BigInteger.ZERO)) {
            return true;
        }
        else
        {
            if (n.mod(BigInteger.valueOf(100)).equals(BigInteger.ZERO))
                return false;
            else
            {
                if (n.mod(BigInteger.valueOf(4)).equals(BigInteger.ZERO))
                    return true;
                else
                    return false;
            }
        }
    }
    
    static boolean isHuluculu(BigInteger n) {
        if (n.mod(BigInteger.valueOf(15)).equals(BigInteger.ZERO))
            return true;
        return false;
    }
    
    static boolean isBulukulu(BigInteger n) {
        if (n.mod(BigInteger.valueOf(55)).equals(BigInteger.ZERO))
        {
            if (isLeapyear(n)) return true;
        }
        return false;
    }
}

