

import java.math.BigInteger;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Set;

public class Main {

    static void d(Object x) {  System.out.println(x);  }
    static Scanner in = new Scanner(System.in);
    
    static void b_sort(int []a){
        
        int C=0;
        
        for (int i = 0; i <a.length; i++) {
            for (int j = 0; j <a.length - i - 1; j++) {
                if (a[j] > a[j + 1]) {

                    int temp;
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;

                    C++;
                }
            }
        }
        
        d("Minimum exchange operations : "+C);
    }


    public static void main(String[] args) {
        
        while(in.hasNext()){
            int n=in.nextInt();
            int[] a = new int[n];
            for(int i=0; i<n; i++){
                a[i] = in.nextInt();
            }
            b_sort(a);
        }
        
    }
}

