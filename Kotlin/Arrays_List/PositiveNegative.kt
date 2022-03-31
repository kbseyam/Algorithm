package Kotlin.Arrays_List

fun main() {
    val originalList: MutableList<Int> =
        mutableListOf(0, 39, 4, -8, 3, 6, -6, -78, -2, -84, 1, 99, -464, 97, -33, 5, -400, -500, 14, 20)
    val positiveList: MutableList<Int> = mutableListOf()
    val negativeList: MutableList<Int> = mutableListOf()

    for (n in originalList) {
        if (n == 0) {
            continue
        } else if (n > 1) {
            positiveList.add(n)
        } else {
            negativeList.add(n)
        }
    }

    println("Original List: $originalList")
    println("Positive List: $positiveList")
    println("Negative List: $negativeList")

}