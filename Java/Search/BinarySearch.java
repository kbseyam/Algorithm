package Java.Search;

public class BinarySearch {
    public static void main(String[] args) {
        int[] numbers = new int[]{0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98};
        System.out.println(binarySearch(numbers, 0));
    }

    private static boolean binarySearch(int[] numbers, int num) {
        int low = 0;
        int high = numbers.length - 1;
        int mid;

        while (low <= high) {
            mid = (low + high) / 2;
            if (num == numbers[mid]) {
                return true;
            } else if (num < numbers[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }

}
