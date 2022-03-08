fun main() {
    val num = readln().toInt()
    val M = readln().toInt()
    var sum = 1

    for (i in 1..M) {
        sum *= num
    }

    print(sum)
}