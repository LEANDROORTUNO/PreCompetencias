import java.util.Scanner;
public class Plaza_Teatro{
    public static void main (String arg[]){
        Scanner sc = new Scanner (System.in);
        long n , m , a, res;
        n = sc.nextInt();
        m = sc.nextInt();
        a = sc.nextInt();
        res = ((n + a - 1) / a) * ((m + a - 1) / a);
        System.out.println(res);
    }
}