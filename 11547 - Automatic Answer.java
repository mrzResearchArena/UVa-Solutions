
import java.util.Scanner;

public class MainClass {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int T; T = in.nextInt();
        int i=1;
        int n;
        while(i<=T){
        
            n = in.nextInt();
            n *= 567;
            n /= 9;
            n += 7492;
            n *= 235;
            n /= 47;
            n -= 498;
            
            if(n<0){
                n = -n;
            }
            
            n /= 10;
            int rem = n%10;
            d(rem);
            
            i++;
            
        }
            
    }
    
    static void d(Object x){
        System.out.println(x);
    }
}
