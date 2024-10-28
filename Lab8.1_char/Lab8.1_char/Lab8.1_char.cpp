#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int FindThirdCommaIndex(const char* str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ',') {
            count++;
            if (count == 3) {
                return i;
            }
        }
        i++;
    }
    return -1;
}

char* ReplaceCommasWithStars(char* str) {
    size_t len = strlen(str);
    char* result = new char[len * 2 + 1];
    size_t i = 0;
    size_t j = 0;

    while (i < len) {
        if (str[i] == ',') {
            result[j++] = '*';
            result[j++] = '*';
        }
        else {
            result[j++] = str[i];
        }
        i++;
    }
    result[j] = '\0';
    return result;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    int thirdCommaIndex = FindThirdCommaIndex(str);
    if (thirdCommaIndex != -1) {
        cout << "Index of third comma: " << thirdCommaIndex << endl;
    }
    else {
        cout << "There is no third comma in the string." << endl;
    }

    char* modifiedStr = ReplaceCommasWithStars(str);
    cout << "Modified string: " << modifiedStr << endl;

    delete[] modifiedStr;

    return 0;
}