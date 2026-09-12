import java.util.Scanner;
import java.util.ArrayList;
import java.util.Comparator;

public class Lines{

	static ArrayList<Integer> listaNumeros = new ArrayList<Integer>();


	private int resolver(int valorMaximo){
		int sumatoria, i, numeroProblemas;
		sumatoria = i =  numeroProblemas = 0;

		listaNumeros.sort(Comparator.naturalOrder());

		while(i < listaNumeros.size() && sumatoria + listaNumeros.get(i) <= valorMaximo){
			sumatoria += listaNumeros.get(i);
			numeroProblemas++;
			i++;
		}

		return numeroProblemas;
	}	

	public static void main(String[] args){
		Lines lines = new Lines();
		Scanner sc  = new Scanner(System.in);
		int n, lph, pr;
		n = sc.nextInt();
		lph = sc.nextInt();


		for(int i = 1; i <= n; i++){
			pr = sc.nextInt();
			listaNumeros.add(pr);
		}

		System.out.println(lines.resolver(lph * 5));
	}
}