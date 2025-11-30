import java.util.Scanner;

public class PascalsTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();

        for (int i = 0; i < rows; i++) {
            int number = 1;

            // Print spaces
            for (int s = 0; s < rows - i; s++) {
                System.out.print(" ");
            }

            // Print numbers
            for (int j = 0; j <= i; j++) {
                System.out.print(number + " ");
                number = number * (i - j) / (j + 1);
            }

            System.out.println();
        }
    }
}
