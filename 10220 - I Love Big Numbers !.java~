
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static Scanner in = new Scanner(System.in);
    static void d(Object x) {  System.out.println(x);  }

    public static void main(String[] args) {
        while (in.hasNext()) {
            int n;
            n = in.nextInt();

            BigInteger result = BigInteger.ONE;
            int i = 1;
            while (i <= n) {
                result = BigInteger.valueOf(i).multiply(result);
                i++;
            }
            
            BigInteger num = result;
            BigInteger rem;
            
            BigInteger sum = BigInteger.ZERO;
            while (true) {
                if (num.equals(BigInteger.ZERO)) {
                    break;
                } else {
                    rem = num.mod(BigInteger.TEN);
                    num = num.divide(BigInteger.TEN);
                    sum = sum.add(rem);
                }
            }
            
            d(sum);
            
        }
    }
}

