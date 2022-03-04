fun main() {
    val n = readln().toInt()
    var sum = 0

    for (counter in 1..n) {
        if (counter % 2 == 0) {
            sum += counter
        }
    }

    print(sum)
}