package Kotlin.Search

fun main() {
    val nums = listOf(0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98)
    println(binarySearch(nums, 81))
}

fun binarySearch(numbers: List<Int>, num: Int) : Boolean {
    var low = 0
    var high = numbers.size - 1
    var mid: Int
    while (low <= high) {
        mid = (low + high) / 2
        if (num == numbers[mid]) {
            return true
        } else if (num < numbers[mid]) {
            high = mid - 1
        } else {
            low = mid + 1
        }
    }
    return false
}