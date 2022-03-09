fun main() {
    val num1 = readln().toDouble()
    val num2 = readln().toDouble()

    when (readln()) {
        "+" -> print(num1 + num2)
        "-" -> print(num1 - num2)
        "*" -> print(num1 * num2)
        "/" -> print(num1 / num2)
    }

}