import java.util.Scanner;
public class Domino_Piling{
	public static void main (String arg []){
		Scanner sc = new Scanner (System.in);
		int m, n, prod, res;
		m = sc.nextInt();
		n = sc.nextInt();
        prod = m * n;
        res  = prod/2;
        System.out.println(res);
	}
}