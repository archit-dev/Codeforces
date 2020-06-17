import java.util.Scanner;

public class Solution {
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        int k,n,w,price=0,i=1;
        k = scan.nextInt();
        n = scan.nextInt();
        w = scan.nextInt();
        for( int j=0 ; j<w;j+=1){
            price+= i*k;
            i+=1;
        }
        if(price<=n){
            System.out.println("0");
        }
        else{
            System.out.println(Math.abs(price-n));
        }
    }
}
