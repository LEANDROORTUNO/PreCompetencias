import java.util.Scanner;
public class Young{
	public static void main (String args[]){
		Scanner sc = new Scanner(System.in);
		int n, x, y, z;
		int[][] matriz;
		String res;
		res = "";
		n = sc.nextInt();
		matriz = new int[n][3];
		llenarM(matriz,n,sc);
		x = sumaX(matriz);
		y = sumaY(matriz);
		z = sumaZ(matriz);
		if(x == 0 && y == 0 && z == 0){
			res = "YES";
		}else{
			res = "NO";
		}
		System.out.println(res);
	}
	public static void llenarM(int[][]matriz, int n, Scanner sc){
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < 3; j++){
				matriz[i][j] = sc.nextInt();
			}
		}
	}
	public static int sumaX(int[][] m){
		int suma, j;
		suma = 0;
		j = 0;
		for(int i = 0 ; i < m.length ; i++){
			suma += m[i][j];
		}
		return suma;
	}
	public static int sumaY(int[][] m){
		int suma, j;
		suma = 0;
		j = 1;
		for(int i = 0 ; i < m.length ; i++){
			suma += m[i][j];
		}
		return suma;
	}
	public static int sumaZ(int[][] m){
		int suma, j;
		suma = 0;
		j = 2;
		for(int i = 0 ; i < m.length ; i++){
			suma += m[i][j];
		}
		return suma;
	}
}		