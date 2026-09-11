import java.util.ArrayList;
import java.util.Scanner;

public class LoveTriangule{
	static ArrayList<Integer> listaPlanos = new ArrayList<Integer>();


	private String resolver(){
		int numeroAviones, segundoAvion, tercerAvion;

		numeroAviones = 1;

		for(int i = 0; i < listaPlanos.size(); i++){
			numeroAviones++;
			segundoAvion = listaPlanos.get(i);
			tercerAvion = listaPlanos.get(segundoAvion - 1);
			
			if(listaPlanos.get(i) != listaPlanos.get(segundoAvion - 1)){	
				if(i + 1 == listaPlanos.get(tercerAvion - 1)){
					numeroAviones++;
				}else{
					numeroAviones = 1;
					segundoAvion = 0;
				}
			}

			if(numeroAviones == 3){
				return "YES";
			}
		}

		return "NO";
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		LoveTriangule a = new LoveTriangule(); 
		int numeroCasos, planos;

		numeroCasos = sc.nextInt();

		for(int i = 1; i <= numeroCasos; i++){
			planos = sc.nextInt();
			listaPlanos.add(planos);
		}

		System.out.println(a.resolver());
		sc.close();
	}
}