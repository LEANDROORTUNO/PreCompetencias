
public class EjercicioMarco{

	public static int voltear(String res){

		String resp = "";
		for(int i = res.length() - 1; i >= 0; i--){
			resp += res.charAt(i); 
		}
		return Integer.parseInt(resp);
	}

	public static int resolver(int[] list1, int[] list2){
		String res = "";
		int acarreo, numRes;
		acarreo = 0;
		for(int i = list1.length - 1; i >= 0; i--){
			numRes = list1[i] + list2[i] + acarreo;
			acarreo = numRes / 10 ;
			numRes %= 10;
			res += numRes;
		}

		return voltear(res);

	}	

	public static void main(String[] args){
		int[] list1 = {2,9,9};
		int[] list2 = {3,9,9};

		System.out.println(resolver(list1, list2));
	}
}
