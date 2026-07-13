import java.util.Scanner;
public class Nearly{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		long num;
		String res;
		res = "";
		num = sc.nextLong();
		if(evaluar(num)){
			res = "YES";
		}else{
			res = "NO";
		}
		System.out.println(res);
	}

	public static boolean evaluar (long n){
		boolean res;
		int cont;
		cont = 0;
		res = false;
		while(n > 0){
			long a;
			a = n % 10;
			if(a == 4 || a == 7){
				cont++;
			}
			n /= 10;
		}
		res = cont == 7 || cont == 4;
		return res;
	}
}		