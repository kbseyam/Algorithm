fun main() {

    var N: Long

    do {
        N = readln().toLong()
    } while (N <= 0)

    var factorial : Long = 1

    for (i in 1..N) {
        factorial *= i;
    }

    print(factorial)

}