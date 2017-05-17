import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static Scanner in = new Scanner(System.in);

    public static BigInteger[] a = new BigInteger[1000 + 10];

    public static void preCalculation()
    {
        a[0] = BigInteger.ZERO;
        a[1] = BigInteger.ONE;

        for (int i = 2; i < a.length ; i++)
        {
            a[i] = a[i-1].add(a[i-2]);
        }

        int i=2;
        while (i<a.length)
        {
            a[i] = a[i-1].add(a[i-2]);
            i++;
        }
    }




    public static void main(String[] args)
    {
        preCalculation();

        while (in.hasNext())
        {
            int input = in.nextInt();
            System.out.println(a[input+2]);
        }
    }
}
