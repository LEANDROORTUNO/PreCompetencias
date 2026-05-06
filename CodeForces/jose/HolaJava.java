import java.util.Scanner;
public class HolaJava{
	public static void main (String[] args){
	Scanner sc = new Scanner(System.in);
	int n, k;
	int cont = 0;
	n = sc.nextInt();
	k = sc.nextInt();
	int[] nums = new int [n];
	for (int i = 0; i < nums.length; i++){
		nums[i] = sc.nextInt();
	}
	int aux = nums[k-1];
	for(int i = 0; i < nums.length; i++){
		if((nums[i] >= aux)  && (nums[i] > 0)){
			cont++;
		}
	}
	System.out.println(cont);

	}
}