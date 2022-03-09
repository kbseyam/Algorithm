fun main() {
    print("Pennies: ")
    val pennies = readln().toInt()
    print("Nickels: ")
    val nickels = readln().toInt()
    print("Dimes: ")
    val dimes = readln().toInt()
    print("Quarters: ")
    val quarters = readln().toInt()
    print("Dollars: ")
    val dollars = readln().toInt()

    val totalPennies = pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100.0
    val totalDollars = totalPennies / 100

    println(totalPennies)
    println(totalDollars)

}