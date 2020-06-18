import javax.sound.midi.SysexMessage;
import java.util.Scanner;

public class Solution {
    public static void main ( String [] args ){
        Scanner s = new Scanner(System.in);
        int i=0,j=0;
        char[][] matrix = new char[4][4];
        for( i = 0 ;i < 4 ; i++){
            String ip = s.nextLine();
            for( j = 0 ; j < 4 ; j++){
                matrix[i][j]= ip.charAt(j);
            }
        }
        boolean ans=false;
        for( i = 0; i < 3 ; i++){
            int count=0;
            for(j=0;j<3;j++){
                count=0;
                if(matrix[i][j]=='#'){
                    count+=1;
                }
                if(matrix[i][j+1]=='#'){
                    count+=1;
                }
                if(matrix[i+1][j]=='#'){
                    count+=1;
                }
                if(matrix[i+1][j+1]=='#'){
                    count+=1;
                }
                if(count>=3){
                    ans=true;
                    break;
                }
                else{
                    count=0;
                    if(matrix[i][j]=='.'){
                        count+=1;
                    }
                    if(matrix[i][j+1]=='.'){
                        count+=1;
                    }
                    if(matrix[i+1][j]=='.'){
                        count+=1;
                    }
                    if(matrix[i+1][j+1]=='.'){
                        count+=1;
                    }
                    if(count>=3){
                        ans=true;
                        break;
                    }
                }
            }
        }
        if(ans == true){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
