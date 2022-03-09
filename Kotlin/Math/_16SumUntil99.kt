fun main() {
    var sum = 0
    var num: Int

    num = readln().toInt()

    while (num != -99) {
        sum += num
        num = readln().toInt()
    }

    print(sum)

}