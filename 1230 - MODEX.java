import java.math.*;
import java.util.*;
import java.io.*;

public class Main
{
    public static Scanner in = new Scanner(System.in);

    public static void solution()
    {

        int TC=in.nextInt();
        while (TC-- > 0)
        {

            BigInteger x=in.nextBigInteger();
            BigInteger y=in.nextBigInteger();
            BigInteger n=in.nextBigInteger();

            BigInteger result = x.modPow(y, n);

            System.out.println(result.toString());

        }
    }

    public static void main(String[] args)
    {
        solution();
    }
}

