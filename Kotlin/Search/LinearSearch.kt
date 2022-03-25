package Kotlin.Search

fun main() {
    val nums = listOf<Int>(0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98)
    println(linearSearch(nums, 41))
}

fun linearSearch(numbers: List<Int>, num: Int): Boolean {
    for (i in numbers) {
        if (i == num) {
            return true
        }
    }
    return false
}