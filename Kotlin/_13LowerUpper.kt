package Kotlin

fun main() {
    println("khalid -> ${kToUpper("khalid")}")
    println("KHALID -> ${kToLower("KHALID")}")
}

fun kToUpper(text: String): String {
    var result = ""
    for (c in text) {
        result += if (c.code in 97..122) {
            (c.code - 32).toChar()
        } else {
            c
        }
    }

    return result
}

fun kToLower(text: String): String {
    var result = ""
    for (c in text) {
        result += if (c.code in 65..90) {
            (c.code + 32).toChar()
        } else {
            c
        }
    }

    return result
}