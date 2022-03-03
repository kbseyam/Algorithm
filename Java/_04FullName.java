package Java;

import java.util.Scanner;

public class _04FullName {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("First name: ");
        String fName = scanner.nextLine();
        System.out.print("Last name: ");
        String lName = scanner.nextLine();
        scanner.close();

        String fullName = fName + " " + lName;
        System.out.println(fullName);
    }
}
