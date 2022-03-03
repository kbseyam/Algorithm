fun main() {
    val age = readln().toShort()

    if (age in 18..45) {
        print("Valid age")
    } else {
        print("Invalid age")
    }
}