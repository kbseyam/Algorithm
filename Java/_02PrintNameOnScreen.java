package Java;

import java.util.Scanner;

public class _02PrintNameOnScreen {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println(name);
        scanner.close();
    }
}
