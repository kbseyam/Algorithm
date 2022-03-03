import kotlin.math.PI
import kotlin.math.pow
import kotlin.math.sqrt

fun main() {
    val a = readln().toDouble()
    val b = readln().toDouble()
    val c = readln().toDouble()

    val p = (a + b + c) / 2
    val area = PI * ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))).pow(2)
    print(area)
}