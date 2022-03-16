package Java.Search;

public class LinearSearch {
    public static void main(String[] args) {
        
        int[] array = {0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98};
        
        System.out.println(linearSearch(array, 55));

    }   
    
    public static boolean linearSearch(int[] numbers, int number) {

        for (int i = 1; i < numbers.length; i++) {
            if (numbers[i] == number) {
                return true;
            }
        }

        return false;

    }

}