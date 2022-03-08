fun main() {

    val TS = readln().toInt() // TS = TotalSales

    when {
        TS >= 1000000 -> print(TS * 0.01)
        TS >= 500000 -> print(TS * 0.02)
        TS >= 100000 -> print(TS * 0.03)
        TS >= 50000 -> print(TS * 0.05)
        else -> print(TS * 0.00)
    }

}