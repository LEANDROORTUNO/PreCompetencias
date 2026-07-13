import java.util.Scanner;
public class Wrong{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int n, k;
		n = sc.nextInt();
		k = sc.nextInt();
		for(int i = 0 ; i < k ; i++ ){
			if(n % 10 == 0){
				n /= 10;
			}else{
				n -= 1;
			}
		}
		System.out.println(n);
	}
}		