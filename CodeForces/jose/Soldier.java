import java.util.Scanner;
public class Soldier{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int k , n , w, res;
		k = sc.nextInt();
		n = sc.nextInt();
		w = sc.nextInt();
		res = 0;
		for(int i = 1 ; i <= w ; i++){
			res += k*i;
		}
		res = res-n;
		if(res < 0){
			res = 0;
		}
		System.out.println(res);
	}
}		