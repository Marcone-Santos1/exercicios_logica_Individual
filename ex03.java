import javax.swing.JOptionPane;
import java.lang.Math;

public class ex03 {
    public static void main(String[] args) {
        
        // 3 - Fazer um programa que solicite 2 números e informe:
        /*
        a) A soma dos números;
        b) O produto do primeiro número pelo quadrado do segundo;
        c) O quadrado do primeiro número;
        d) A raiz quadrada da soma dos quadrados;
        e) O seno da diferença do primeiro número pelo segundo;
        f) O módulo do primeiro número.
        */

        
        resultado();

    }

    public static float soma(float n1, float n2){

        return n1 + n2;

    }

    public static float produto(float n1, float n2){
        
        float produtos = n1 * (n2 * n2);

        return produtos;

    }

    public static float quadrado(float n1) {

        float quadrados = n1 * n1;

        return quadrados;

    }

    public static double raizSoma(float n1, float n2) {
        
        float soma = (n1 * n1) + (n2 * n2);

        double raiz = Math.sqrt(soma);

        return raiz;
    }

    public static double seno(float n1, float n2) {
               
        float resultadoS = n2 - n1;
        double resultadoSeno = Math.sin(resultadoS);

        return resultadoSeno;
    }    

    public static int modulo(int n1, int n2){
        
        int resultado = Math.floorMod(n1, n2);

        return resultado;
    }   

    public static void resultado() {

        int n1 = Integer.parseInt(JOptionPane.showInputDialog("Entre com o valor do número 1: "));
        int n2 = Integer.parseInt(JOptionPane.showInputDialog("Entre com o valor do número 2: "));
        
        JOptionPane.showMessageDialog(null ,"Soma: " + soma(n1, n2) + "\nProduto: " + produto(n1, n2) + "\nO quadrado de um numero: " + quadrado(n1) + "\nA raiz quadrada da soma dos quadrados: " + raizSoma(n1, n2) + "\nDiferença do seno: " + seno(n1, n2) + "\nModulo do primeiro número: " + modulo(n1, n2));

    }
 
}
