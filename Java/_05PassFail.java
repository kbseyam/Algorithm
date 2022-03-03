package Java;

import java.util.Scanner;

public class _05PassFail {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        short mark = scanner.nextShort();
        scanner.close();

        if (mark >= 50) {
            System.out.println("Pass");
        } else {
            System.out.println("Fail");
        }
    }
}
