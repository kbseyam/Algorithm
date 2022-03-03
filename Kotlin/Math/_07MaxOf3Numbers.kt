fun main() {
    val num1 = readln().toInt()
    val num2 = readln().toInt()
    val num3 = readln().toInt()

    if (num1 > num2) {
        if (num1 > num3) {
            print(num1)
        } else {
            print(num3)
        }
    } else {
        if (num2 > num3) {
            print(num2)
        } else {
            print(num3)
        }
    }
}