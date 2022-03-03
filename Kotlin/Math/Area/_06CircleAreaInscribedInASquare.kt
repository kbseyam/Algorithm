import kotlin.math.PI
import kotlin.math.pow

fun main() {
    val a = readln().toDouble()
    val area = (PI * a.pow(2)) / 4
    print(area)
}