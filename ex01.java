import javax.swing.JOptionPane;

class ex01{
    public static void main(String[] args) {
        
        // 1 - Fazer um programa que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.
        
        float metros, decimetro, centimetro, milimetro;
        String resultadoD, resultadoC, resultadoM, resultado;

        metros = Float.parseFloat(JOptionPane.showInputDialog("Entre com o velor em metros: "));

        decimetro = metros * 10;
        centimetro = metros * 100;
        milimetro = metros * 1000;

        resultado = "Os valores convertidos são:\n\n";
        resultadoD = "O valor de metros em decímetros é: " + decimetro;
        resultadoC = "\nO valor de metros em centímetros é: " + centimetro;
        resultadoM = "\nO valor de metros em milimetros é: " + milimetro;

        resultado += resultadoD + resultadoC + resultadoM;

        JOptionPane.showMessageDialog(null, resultado);

    }
}