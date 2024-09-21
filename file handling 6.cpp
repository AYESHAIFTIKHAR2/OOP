#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void displayFile(const string &filename) {
    ifstream file(filename);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "Error opening file: " << filename << endl;
    }
}

int main() {
    ifstream inputFile("test.txt");
    ofstream outputFile("replacing_test.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        string line;
        string searchWord = "ayesha";
        string replaceWord = "AYESHA";

        cout << "Search word: " << searchWord << endl;
        cout << "Replace word: " << replaceWord << endl;

        cout << "Before finding and replacing:" << endl;
        displayFile("test.txt");

        while (getline(inputFile, line)) {
            size_t pos = line.find(searchWord);

            while (pos != string::npos) {
                line.replace(pos, searchWord.length(), replaceWord);
                pos = line.find(searchWord, pos + replaceWord.length());
            }
            outputFile << line << endl;
        }

        inputFile.close();
        outputFile.close();

        cout << "File after finding and replacing:" << endl;
        displayFile("replacing_test.txt");
    } else {
        if (!inputFile.is_open()) {
            cerr << "Error opening input file: test.txt" << endl;
        }
        if (!outputFile.is_open()) {
            cerr << "Error opening output file: replacing_test.txt" << endl;
        }
    }

    return 0;
}
 