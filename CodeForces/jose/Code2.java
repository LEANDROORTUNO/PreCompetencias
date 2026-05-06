package codeforce;
import java.util.Scanner;
public class Code2
{
    public static void main (String arg[]){
        Scanner scanner = new Scanner(System.in);
        int n;
        String palabra;
        n = scanner.nextInt();
        for (int i=0 ;  i < n ; i++){
            palabra = scanner.next();
            int nCarac = palabra.length();
            if(nCarac <= 10 && nCarac > 0){
                System.out.println(palabra);
            }else{
                char p = palabra.charAt(0);
                char u = palabra.charAt(palabra.length()-1);
                nCarac = nCarac - 2;
                System.out.println(""+p + nCarac + u);
            }
        }
    }
}