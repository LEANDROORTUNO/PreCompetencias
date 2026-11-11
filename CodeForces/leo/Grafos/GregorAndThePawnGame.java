import java.util.Scanner;
import java.util.ArrayList;

public class GregorAndThePawnGame{

	static ArrayList<Integer>[] grafo;
	static int[] respuestas;
	static char[] visitado;
	static Scanner sc = new Scanner(System.in);
	static int m;

	public static void main(String[] args){
		int n;  n = sc.nextInt();
		respuestas = new int[n];
		GregorAndThePawnGame pg = new GregorAndThePawnGame();

		pg.comenzarGrafo();

		for(int i = 0; i < n; i++){
			m = sc.nextInt();

			pg.leerPeonesBlancos();
			pg.leerPeonesNegros();

			pg.esolver();

			grafo[0].clear();
			grafo[1].clear();
		}

		pg.mostrar();
		sc.close();
	}


	private void comenzarGrafo(){
		for(ArrayList<Integer> aux : grafo){
			aux = new ArrayList<Integer>();
		}

		for(char aux : visitado)[
			aux = 'n';
		]
	}

	private void leerPeonesBlancos(){
		int aux;

		for(int i = 0; i < m; i++){
			aux = sc.nextInt();
			grafo[0].add(aux);
		}
	}

	private void leerPeonesNegros(){
		int aux;

		for(int i = 0; i < m; i++){
			aux = sc.nextInt();
			grafo[1].add(aux);
		}
	}


	private void resolver(){
		int contador = 0;

		for(int i = 0; i < m; i++){
			if(grafo[1].get(i) == 1){
				if(grafo[0].get(i) == 0 && visitado[i] == 'n'){
					contador++;
					visitado[i] = 'v';

				}else if(grafo[0].get(i + 1) == 0 && visitado[i + 1] == 'n'){
					contador++;
					visitado[i]
				}

			}
		}
	}

	public void mostrar(){
		for(int aux : respuestas){
			System.out.println(aux);
		}
	}
}