package codeforce;
import java.util.Scanner;
public class A_Team{
    public static void main(String [] arg){
        Scanner sc = new Scanner(System.in);
        int n, res;
        n = sc.nextInt();
        res = 0;
        for(int i = 0 ; i < n ; i++){
            int am1,am2,am3;
            am1 = sc.nextInt();
            am2 = sc.nextInt();
            am3 = sc.nextInt();
            if((am1 == 1 && am2 == 1) || (am2 == 1 && am3 == 1) || am1 == 1 && am3 == 1){
                res += 1;
            }
        }
        System.out.println(res);
    }
}