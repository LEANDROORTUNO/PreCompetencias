import java.util.Scanner;
import java.util.ArrayList;

public class DestroyingBridges{

	static ArrayList<Integer> listaIslas = new ArrayList<Integer>();
	static ArrayList<Integer> listaNDestruidos = new ArrayList<Integer>();
	static ArrayList<Integer> respuestas = new ArrayList<Integer>();

	private void mostrar(){
		for(int i : respuestas){
			System.out.println(i);
		}
	}

	private void resolver(){

		for(int i = 0; i < listaIslas.size(); i++){
			if(listaNDestruidos.get(i) >= listaIslas.get(i) - 1){
				respuestas.add(1);
			}else{
				respuestas.add(listaIslas.get(i));
			}
		}
	}

	public static void main(String[] args){

		DestroyingBridges g = new DestroyingBridges();
		Scanner sc = new Scanner(System.in);
		int numeroCasos, numeroIsla, nDestruidos;

		numeroCasos = sc.nextInt();

		for(int i = 0;  i < numeroCasos; i++){
			numeroIsla = sc.nextInt();
			nDestruidos = sc.nextInt();

			listaIslas.add(numeroIsla);
			listaNDestruidos.add(nDestruidos);
		}

		g.resolver();

		g.mostrar();
	}
}