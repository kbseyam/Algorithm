// Search a sequence in a string.

#include <iostream>
#include <vector>
using namespace std;

struct stFound {
    int countFound = 0;
    vector<int> posFound;
};

stFound sequenceInString(string text, string sequence);
void printPosFound(vector<int> v);

int main() {
    string str1 = "asadafadadagcyadaadaadghfdadadagteuasdadadaghu";
    string str2;
    cout << "Sequence: ";
    cin >> str2;

    stFound found = sequenceInString(str1, str2);

    cout << "Count Of Found: " << found.countFound << endl;
    printPosFound(found.posFound);

    return 0;
}

stFound sequenceInString(string text, string sequence) {
    stFound found;

    for (int i = 0; i < text.length() - sequence.length(); i++) {
        if (text[i] == sequence[0]) {
            string temp = "";
            for (int j = i; j < i + sequence.length(); j++) {
                temp += text[j];
            }
            if (temp == sequence) {
                found.countFound++;
                found.posFound.push_back(i);
            }
        }
    }

    return found;
}

void printPosFound(vector<int> v) {
    cout << "Position Of Found: [ ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
    cout << ']' << endl;
}