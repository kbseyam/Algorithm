fun main() {

    print("Age: ")
    val age = readln().toShort()
    print("Driver license: ")
    val dL = readln().toBoolean()

    if (age > 21 && dL) {
        print("Hired")
    } else {
        print("Rejected")
    }

}