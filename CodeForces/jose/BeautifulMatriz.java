import java.util.Scanner;
public class BeautifulMatriz{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int[][] matriz = new int[5][5];
		int res;
		res = 0;
		for(int i = 0; i < 5 ; i++){
			for(int j = 0 ; j < 5 ; j++){
				matriz[i][j] = sc.nextInt();
			}
		}
		res = movM(matriz);
		System.out.println(res);
	}

	public static int movM(int[][] matriz){
		int res;
		res = 0;
		for(int i = 0; i < 5 ; i++){
			for(int j = 0; j < 5 ; j++){
				if(matriz[i][j] == 1){
					res = dif(i,j);	
				}
			}
		}
		return res;
	}

	public static int dif(int i, int j){
		int res;
		res = Math.abs(i-2) + Math.abs(j-2);
		return res;
	}
}