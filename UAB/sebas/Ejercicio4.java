import java.util.Scanner;
public class Ejercicio4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese los caracteres: ");
        String entrada = scanner.nextLine();
        char caracter []= entrada.toCharArray();
        ordenarRGB(caracter, caracter.length);
        for (char c : caracter) {
            System.out.print(c + " ");
        }
    }
    public static void ordenarRGB(char[] arreglo, int n) {
        int inicio = n - 1;
        int medio = 0;
        int fin = 0;
        while (medio <= inicio){
            if (arreglo[medio] == 'R') {
                intercambiar(arreglo, medio, fin);
                medio++;
                fin++;
            } else if (arreglo[medio] == 'G') {
                medio++;
            } else {
                intercambiar(arreglo, medio, inicio);
                inicio--;
                }
            }
        }
        private static void intercambiar(char[] arreglo, int i, int j) {
                char temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
        }
    }
