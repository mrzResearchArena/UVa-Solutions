

import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;

public class Main
{
    static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {

        int T;
        T = in.nextInt();
        while (T != 0)
        {
            
            T--;

            int[] box = new int[10];

            String s = "";

            int n = in.nextInt();
            
            // Reserved data in a string. Like : 123456789101112131415 (if n = 15)
            
            for (int i = 1; i <= n; i++)
            {
                s = s + "" + i;
            }
            
            // Count int array ...

            for (int i = 0; i < s.length(); i++)
            {
                box[s.charAt(i) - 48]++;
            }
            
            // Print Count array 0 to 9 ...

            for (int i = 0; i < box.length - 1; i++)
            {
                System.out.print(box[i] + " ");
            }
            
            System.out.println(box[box.length - 1]);

        }

    }
}

