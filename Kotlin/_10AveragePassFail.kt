fun main() {
    val mark1 = readln().toInt()
    val mark2 = readln().toInt()
    val mark3 = readln().toInt()

    val avg = (mark1 + mark2 + mark3) / 3

    println(avg)

    if (avg >= 50) {
        print("Pass")
    } else {
        print("Fail")
    }
}