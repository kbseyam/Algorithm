import kotlin.math.PI
import kotlin.math.pow

fun main() {
    val d = readln().toDouble()
    val area = (PI * d.pow(2)) / 4
    print(area)
}