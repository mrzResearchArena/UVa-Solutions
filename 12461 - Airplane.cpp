/// Code in C :

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if (n == 0) break;
        else
        {
            printf("1/2");
            cout << endl;
        }
    }
    return 0;
}


/// Code in Java :


import java.util.Scanner;


public class UVa_Airplane {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        int a;
        while(input.hasNext()){
           a = input.nextInt();
           if(a == 0) break;
           else{
               System.out.println("1/2");
           }
        }
     
    }
}
