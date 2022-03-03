package Java;

import java.util.Scanner;

public class _08ReadUntilAgeBetween18And45 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        short age;

        do {
            age = scanner.nextShort();
        } while (!(age >= 18 && age <= 45));
        scanner.close();
    
        System.out.println("Valid age");
    
    }
}
