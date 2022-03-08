fun main() {

    when (readln().toInt()) {
        in 90..100 -> print('A')
        in 80..89 -> print('B')
        in 70..79 -> print('C')
        in 60..69 -> print('D')
        in 50..59 -> print('E')
        else -> print('F')
    }

}