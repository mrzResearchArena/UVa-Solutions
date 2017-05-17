
import java.math.BigInteger;
import java.util.Scanner;


public class Main {
    
    static void d(Object x) {  System.out.println(x);  }
    static Scanner in = new Scanner(System.in);
    
    static BigInteger ipower(int b, int p){
        BigInteger result = BigInteger.ONE;
        for(int i=1; i<=p; i++){
            result = result.multiply(BigInteger.valueOf(b)) ;
        }
        return result;
    }
    
    
    static BigInteger Calculation(int N, int A){
        BigInteger sum = BigInteger.ZERO;
        //BigInteger n = BigInteger.valueOf(N);
        //BigInteger a = BigInteger.valueOf(A);
        //BigInteger Step1;
        //BigInteger Step2;
        
        int i=1;
        while(i<=N){
            //Step1 = ipower(A, i);
            //Step2 = BigInteger.valueOf(i).multiply(Step1);
            //sum = sum.add(Step2);
            sum =sum.add(BigInteger.valueOf(i).multiply(ipower(A, i)));
            i++;
        }
        
        return sum;
        
    }
   
   	
    public static void main(String[] args) {
        
        int N;
        int A;
        while(in.hasNext()){
            
            N = in.nextInt();
            A = in.nextInt();
            
            d(Calculation(N, A).toString());
        }
    }
    
}

