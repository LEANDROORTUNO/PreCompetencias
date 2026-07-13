import java.util.Scanner;
public class Task{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		String palabra,minus,nuev;
		palabra = sc.next();
		nuev = "";
		minus = minus(palabra);
		for(int i = 0 ; i < minus.length() ; i++){
			if(comprobar(minus,i)){
				nuev += "." + minus.charAt(i);
			}
		}
		System.out.println(nuev);
	}
	public static String minus(String p){
		String res;
		res = "";
		for(int i = 0; i < p.length() ; i++){
			char a;
			a = p.charAt(i);
			if(a < 97 ){
				res += (char)((int)a+32); 
			}else{
				res += a;
			}
		}
		return res;
	}
	public static boolean comprobar(String p, int i){
		boolean res;
		int a = 0;
		res = false;
		if(p.charAt(i) != 97){
			a++;
		}
		if(p.charAt(i) != 101){
			a++;
		}
		if(p.charAt(i) != 105){
			a++;
		}
		if(p.charAt(i) != 111){
			a++;
		}
		if(p.charAt(i) != 117){
			a++;
		}
		if(p.charAt(i) != 121){
			a++;
		}
		if(a == 6){
			res = true;
		}
		return res;
	}
}		