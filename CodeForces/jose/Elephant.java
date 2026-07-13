import java.util.Scanner;
public class Elephant{
	public static void main (String args[]){
		Scanner sc = new Scanner (System.in);
		int x, p;
		x = sc.nextInt();
		p = 0;
		while(x >= 5){
			x -= 5;
			p++;
		}
		if(x == 4){
			x -= 4;
			p++;
		}else if(x == 3){
			x -= 3;
			p++;
		}else if(x == 2){
			x -= 2;
			p++;
		}else if(x == 1){
			x -= 1;
			p++;
		}
		System.out.println(p);
	}
}