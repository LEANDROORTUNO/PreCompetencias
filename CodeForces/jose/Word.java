import java.util.Scanner;
public class Word{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		String pal,nueva;
		pal = sc.next();
		nueva = "";
		if(mMayus(pal)){
			nueva = mayus(pal);
		}else{
			nueva = minus(pal);
		}
		System.out.println(nueva);
	}
	public static boolean mMayus(String p){
		boolean res;
		int cont;
		cont = 0;
		res = false;
		for(int i = 0; i < p.length() ; i++){
			char a;
			a = p.charAt(i);
			if(a < 97){
				cont++;
			}
		}
		if(cont > p.length()/2){
			res = true;
		}
		return res;
	}
	public static String mayus(String p){
		String res;
		res = "";
		for(int i = 0; i < p.length(); i++){
			char a;
			a = p.charAt(i);
			if(a > 96){
				res += (char)((int)a - 32);
			}else{
				res += a;
			}
		}
		return res;
	}
	public static String minus(String p){
		String res;
		res = "";
		for(int i = 0; i < p.length(); i++){
			char a;
			a = p.charAt(i);
			if(a < 97){
				res += (char)((int)a + 32);
			}else{
				res += a;
			}
		}
		return res;
	}
}		