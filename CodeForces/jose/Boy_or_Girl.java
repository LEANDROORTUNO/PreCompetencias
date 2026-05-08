import java.util.Scanner;
public class Boy_or_Girl{
	public static void main (String args []){
		Scanner sc = new Scanner (System.in);
		String usuario;
		int res, res1, lim, i;
		usuario = sc.next();
		lim = usuario.length();
		i = 0;
		res = 0;
		while(i < lim){
			char c = usuario.charAt(i);
			int sum = 0;
			for(int j = i+1 ; j < lim ; j++){
				char d = usuario.charAt(j);
				if((int)c == (int)d){
					sum++;
				}
			}
			if(sum > 0){
				res++;
			}
			i++;
		}
		res1 = lim - res;
		if(res1 % 2 == 0){
			System.out.println("CHAT WITH HER!");
		}else{
			System.out.println("IGNORE HIM!");
		}
	}
}