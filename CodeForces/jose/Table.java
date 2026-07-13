import java.util.Scanner;
public class Table{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int n, res;
		String s;
		n = sc.nextInt();
		s = sc.next();
		res = 0;
		for(int i = 0; i < n-1 ; i++){
			if(s.charAt(i) == s.charAt(i+1)){
				res++;
			}
		}
		System.out.println(res);
	}
}