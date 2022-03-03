fun main() {
    var num1 = readln().toInt()
    var num2 = readln().toInt()

    println("$num1\n$num2")

    val temp = num1
    num1 = num2
    num2 = temp

    println("$num1\n$num2")
}