fun main() {

    do {
        val age = readln().toShort()
    } while (age !in 18..45)

    print("Valid age")

}