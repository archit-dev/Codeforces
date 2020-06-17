import java.util.Scanner;

public class Solution {
    public static void main(String[]args){
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int mishka=0,chris=0,x,y;
        for(int i = 0; i< n ;i++){
            x = scan.nextInt();
            y = scan.nextInt();
            if(x > y){
                mishka+=1;
            }
            else if( x < y){
                chris+=1;
            }
            else{
                mishka+=1;
                chris+=1;
            }
        }
        if(chris > mishka){
            System.out.println("Chris");
        }
        else if( mishka > chris){
            System.out.println("Mishka");
        }
        else{
            System.out.println("Friendship is magic!^^");
        }
    }
}
