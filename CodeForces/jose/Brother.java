import java.util.Scanner;
public class Brother{
	public static void main (String args[]){
		Scanner sc = new Scanner (System.in);
		int a,b,anios;
		a = sc.nextInt();
		b = sc.nextInt();
		anios = 0;
		while( a <= b ){
			a *= 3;
			b *= 2;
			anios++;
		}
		System.out.println(anios);
	}
}