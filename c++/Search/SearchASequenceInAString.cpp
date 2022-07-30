// Search a sequence in a string.

#include <iostream>
#include <vector>
using namespace std;

pair<int, vector<int>> sequenceInString(string text, string sequence);
void printPosFound(vector<int> v);

int main() {
    string str1 = "asadafadadagcyadaadaadghfdadadagteuasdadadaghu";
    string str2;
    cout << "Sequence: ";
    cin >> str2;

    pair<int, vector<int>> found = sequenceInString(str1, str2);

    cout << "Count Of Found: " << found.first << endl;
    printPosFound(found.second);

    return 0;
}

pair<int, vector<int>> sequenceInString(string text, string sequence) {
    int countFound = 0;
    vector<int> posFound;

    for (int i = 0; i < text.length() - sequence.length(); i++) {
        if (text[i] == sequence[0]) {
            string temp = "";
            for (int j = i; j < i + sequence.length(); j++) {
                temp += text[j];
            }
            if (temp == sequence) {
                countFound++;
                posFound.push_back(i);
            }
        }
    }

    return make_pair(countFound, posFound);
}

void printPosFound(vector<int> v) {
    cout << "Position Of Found: [ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << ']' << endl;
}