package Java.Arrays_List;

import java.util.ArrayList;
import java.util.Arrays;

public class PositiveNegative {

    public static void main(String[] args) {

        int[] originalList = {0, 39, 4, -8, 3, 6, -6, -78, -2, -84, 1, 99, -464, 97, -33, 5, -400, -500, 14, 20};

        ArrayList<Integer> positiveList = new ArrayList<>();
        ArrayList<Integer> negativeList = new ArrayList<>();

        for (int n : originalList) {
            if (n > 1) {
                positiveList.add(n);
            } else if (n < 0) {
                negativeList.add(n);
            }
        }

        System.out.println("Original List: " + Arrays.toString(originalList));
        System.out.println("Positive List: " + positiveList);
        System.out.println("Negative List: " + negativeList);

    }

}
