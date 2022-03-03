import kotlin.math.sqrt

fun main() {
    val a = readln().toInt()
    val d = readln().toInt()
    val area = a * sqrt(((d*d) - (a*a)).toDouble())

    print(area)
}