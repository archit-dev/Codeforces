import java.util.Collections;
import java.util.Scanner;
import java.util.ArrayList;

public class Solution{
    public static void main( String [] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        ArrayList<Long> v = new ArrayList<Long>();
        for(int i=0;i<n;i++){
            long x = s.nextLong();
            v.add(x);
        }
        long count=0;
        int l=n;
        Collections.sort(v);
        for(int i=0;i<n;i++){
            count+= Math.abs(l- v.get(n-1-i));
            l-=1;
        }
        System.out.println(count);
    }
}
