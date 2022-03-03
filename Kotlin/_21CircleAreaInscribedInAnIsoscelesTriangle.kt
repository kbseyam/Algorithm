import kotlin.math.PI

fun main() {
    val a = readln().toDouble()
    val b = readln().toDouble()
    val area = PI * (b * b) / 4 * ((2 * a - b) / (2 * a + b))
    print(area)
}