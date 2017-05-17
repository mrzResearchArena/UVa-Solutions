

import java.math.BigInteger;
import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Set;

public class Main {

    static void d(Object x) {  System.out.print(x);  }
    static Scanner in = new Scanner(System.in);
    

    public static void main(String[] args) {
        String s;
        int i=1;
        while(true){
            
            s = in.nextLine();
            
            if(s.equals("*")){
                break;
            }
            
            else{
            
                d("Case "+i+": ");
                
                if(s.equals("Hajj")){
                    d("Hajj-e-Akbar"+"\n");
                }
                else{
                    d("Hajj-e-Asghar"+"\n");
                }
            }
            i ++;
        }
    }
}
