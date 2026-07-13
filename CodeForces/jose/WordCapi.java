import java.util.Scanner;
public class WordCapi{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		String palabra, res;
		char a;
		palabra = sc.nextLine();
		a = palabra.charAt(0);
		res = "";
		if(a >= 97 && a <= 122 ){
			a = (char)((int)a - 32);
		}
		res = res+a;
		for(int i = 1 ; i < palabra.length() ; i++){
			res += palabra.charAt(i);
		}
		System.out.println(res);

	}
}