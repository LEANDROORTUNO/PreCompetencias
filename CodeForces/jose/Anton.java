import java.util.Scanner;
public class Anton{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int n, anton, danik;
		String jug, res;
		n = sc.nextInt();
		jug = sc.next();
		res = "";
		anton = 0;
		danik = 0;
		for(int i = 0; i < n ; i++){
			char a;
			a = jug.charAt(i);
			if(a == 'A'){
				anton++;
			}else{
				danik++;
			}
		}
		if(danik > anton){
			res = "Danik";
		}else if(anton > danik){
			res = "Anton";
		}else{
			res = "Friendship";
		}
		System.out.println(res);
	}
}		