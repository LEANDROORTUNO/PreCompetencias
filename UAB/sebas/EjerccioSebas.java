import java.util.Scanner;
public class EjerccioSebas
{
    public static void main(String []args){
       Scanner sc = new Scanner (System.in);
       int filas = sc.nextInt();
       int columnas = sc.nextInt();
       
       int [][] mimatriz = new int[filas][columnas];
       
        for(int i = 0; i < mimatriz.length; i++){
            for (int j = 0; j < mimatriz.length; j++){
             System.out.print("posicion[" + i + "] [" + j + "]: ");
             mimatriz[i][j] = sc.nextInt();
            }
        }
        mostrarparteoscura(mimatriz);
    }
    public static void mostrarparteoscura(int[][] matriz){
        for(int i = 0; i < matriz.length; i++){
            for(int j = 0; j < matriz.length; j++){
                if((i + j) % 2 !=0){
                    System.out.print(matriz[i][j] );
                }else {
                   System.out.print("--");
                }
            }
            System.out.println();
        }
    }
}