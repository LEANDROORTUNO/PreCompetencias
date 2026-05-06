package codeforce;
import java.util.Scanner;
public class Bit
{
    public static void main (String [] arg){
        Scanner sc = new Scanner(System.in);
        int n, x;
        n = sc.nextInt();
        x = 0;
        for(int i = 0 ; i < n ; i++){
            String res;
            res = sc.next();
            if(res.equals("++x") || res.equals("x++")){
                x += 1;
            }else if(res.equals("--x") || res.equals("x--")){
                x -= 1;
            }
        }
        System.out.println(x);
    }
}    
