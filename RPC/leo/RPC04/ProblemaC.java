import java.util.Scanner;
public class ProblemaC{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String cad1, cad2, res;
		cad1 = sc.nextLine();
		cad2 = sc.nextLine();
		ProblemaC pC = new ProblemaC();
		res = pC.ejercicio(cad1, cad2);
		System.out.println(res);

	}

	public String ejercicio(String cad1, String cad2){
		String dia1, dia2;
		String list[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
		int difDia, difH, difM, hora1, hora2, min1, min2;

		dia1 = desgloceDia(cad1);
		dia2 = desgloceDia(cad2);
		hora1 = desgloceH(cad1);
		hora2 = desgloceH(cad2);
		min1 = desgloceM(cad1);
		min2 = desgloceM(cad2);
		difDia = comparacion(dia1, dia2, list);
		difH = restaH(hora1, hora2);
		difM = resta(min1, min2);
		return contruccion(difDia, difH, difM);
	}

	private String desgloceDia(String cadena){
		String res = "";
		for(int i = 0; i < 3; i++){
			res += cadena.charAt(i);
		}
		return res;
	}

	private int desgloceH(String cadena){
		String res = "";
		int r = 0;
		for(int i = 4; i < 6; i++){
			res += cadena.charAt(i);
		}
		r = Integer.parseInt(res);
		return r;
	}
	private int desgloceM(String cadena){
		String res = "";
		int r = 0;
		for(int i = 7; i < 9; i++){
			res += cadena.charAt(i);
		}
		r = Integer.parseInt(res);
		return r;
	}

	private int comparacion(String dia1, String dia2, String[] lista){
		int res = 0;
		for(int i = 0;  i < lista.length; i++){
			if(lista[i].equals(dia1)){
				for(int j = i; j < lista.length; j++){
					if(lista[j].equals(dia2)){
						res = Math.abs(i - j) - 1;
					}
				} 
				if(res == 0){
					for(int j = 0; j < lista.length; j++){
						if(lista[j].equals(dia2)){
							j += 7;
							res = Math.abs(i - j) - 1;
						}
					}	
				}
			}
		}
		return res;
	}

	private int restaH(int h1, int h2){
		int res = 0;
		if(h1 > h2){
			res = 24 - h1 + h2;
		}else{
			res = h2 - h1;
		}
		return res;
	}

	private int resta(int m1, int m2){
		int res = 0;
		if(m1 > m2){
			res = 60 - m1 + m2;
		}else{
			res = m2 - m1;
		}
		return res;
	}

	private String contruccion(int difDia, int difH, int difM){
		String res = "";
		if(difDia == 0 || difDia == -1){
			if(difH == 0){
				res = res + difM + " minutes";
			}else{
				if(difM == 0){
					res = res + difH + " hours";
				}else{
					res = res + difH + " hours and " + difM + " minutes";
				}
			}
		}else{
			if(difH == 0){
				if(difM == 0){
					res = res + difDia + " days";
				}else{
					res = res + difDia + " days and " + difM + " minutes";
				}
			}else{
				if(difM == 0){
					res = res + difDia + " days and " + difH + " hours";
				}else{
					res = res + difDia + " days, " + difH + " hours, " + difM + " minutes";
				}
			}
		}
		return res;
	}
}