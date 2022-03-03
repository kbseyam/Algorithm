fun main() {
    val num: Int = readln().toInt()
    val result = num % 2

    if (result == 0) {
        print("Even")
    } else {
        print("Odd")
    }
}