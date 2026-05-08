import java.util.Scanner;
public class PetyaStrings{
	public static void main (String args[]){
		Scanner sc = new Scanner (System.in);
		String palabra1, palabra2;
		int lim, i, res;
		palabra1 = sc.next();
		palabra2 = sc.next();
		lim = palabra1.length();
		i = 0;
		res = 0;
		while((i < lim) && (res == 0)){
			char c = palabra1.charAt(i);
			if(c >= 65 && c <= 90){
				c = (char)((int)(c+32));
			}
			char d = palabra2.charAt(i);
			if(d >= 65 && d <= 90){
				d = (char)((int)(d+32));
			}
			if(c < d){
				res = -1;
			}else if(c > d){
				res = 1;
			}
			i++;
		}
		System.out.println(res);
	}

}