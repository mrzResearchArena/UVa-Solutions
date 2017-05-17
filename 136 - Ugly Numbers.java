package oak;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

public class Main {

    static void d(Object x) {  System.out.println(x); }
    static Scanner in = new Scanner(System.in);
    // System.out.printf("The value is : %.2f%n", 562.5645215);
    static long NUM_C=0;

    public static void main(String[] args) {
        
        
        for (long i=859900000; i<859963395; i++) {
            SEND(i);
        }
    }
    
    public static void SEND(long n) {
        HashSet<Long> SET = new HashSet<>();
        
        long Real = n;
        long ROOT = (int) Math.sqrt(n);
        long Two = 2;

        while (n % 2 == 0) {
            n /= 2;
            SET.add(Two);
        }

        long i = 3;
        while (i <= ROOT) {
            if (n % i == 0) {
                while (n % i == 0) {
                    n /= i;
                }
                SET.add(i);
            }
            i++;
        }
        if (n != 1) {
            SET.add(n);
        }

        long Count = 0;
        for (long C : SET) {
            if (C == 2 || C == 3 || C == 5) {
                Count++;
            } else {
                break;
            }
        }

        //d(Realy);
        if (Count == SET.size()) {
            NUM_C++;
            d(NUM_C+" : Yes ! "+Real);
//            if(NUM_C == 1500){
//                d(NUM_C+" : Yes ! "+Real);
//            }
        }
        else {
            //d("No !" + Real);
        }

        

        //d(SET);
        SET.clear();
    }
}

