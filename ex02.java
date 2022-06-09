import javax.swing.JOptionPane;

public class ex02 {
    public static void main(String[] args) {
        
        // 2 - Fazer um programa que solicita um número decimal e imprime o correspondente em hexa e octal.

        int num = Integer.parseInt(JOptionPane.showInputDialog("Entre com o valor em decimal: "));

        String hexNumber = toHex(num);
        String octalNumber = toOctal(num);

        JOptionPane.showMessageDialog(null ,"hexadecimal: " + hexNumber + "\nOctal: " + octalNumber);

    }

    public static String toHex(int numero) {

        // utilizando o toHexString para converter decimal para hexa
        return Integer.toHexString(numero);

    }

    public static String toOctal(int numero) {

        // utilizando o toOctalString para converter decimal para octal
        return Integer.toOctalString(numero);

    }
}
