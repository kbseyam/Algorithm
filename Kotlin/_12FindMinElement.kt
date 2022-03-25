package Kotlin

fun main() {
    val numbers = listOf(99, 55, 44, 89, 78, 99, 100, 1987, 18, 10, 11, 10, 9, 8, 7, 6, 8, 9, 9)
    println(findMin(numbers))
}

fun findMin(list: List<Int>) : Int {
    var minVal =  list[0]
    for (i in 1 until list.size) {
        if (list[i] < minVal) {
            minVal = list[i]
        }
    }

    return minVal
}