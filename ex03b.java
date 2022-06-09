import javax.swing.JOptionPane;

public class ex03b {
    public static void main(String[] args) {

        /*3 - Faça um programa que lê dois valores e imprime:

        se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;

        se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;

        se ambos forem iguais a mensagem "valores iguais".
         */

        int vetor[];

        int num1 = Integer.parseInt(JOptionPane.showInputDialog(null, "Entre o primeiro valor: "));
        int num2 = Integer.parseInt(JOptionPane.showInputDialog(null, "Entre o segundo valor: "));
        
        vetor = new int[num2];

        if (num1 < num2) {
            for(int i = num1; i < num2; i++){
                JOptionPane.showMessageDialog(null, "Os valores do primeiro ao segundo são: " +i);
            }

            for(int i = num2; i > num1; i--){
                JOptionPane.showMessageDialog(null, "Os valores do segundo ao primeiro são: " +i);
            }
        }

        else if(num1 == num2){
            JOptionPane.showMessageDialog(null, "Os valores são iguais");
        }


    }
}
