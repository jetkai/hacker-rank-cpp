#include <string_view>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

class Arrays {

public:
    static int solution(int size, vector<int> numbers) {
        if(size != numbers.size()) {
            return 0;
        }
        for (int i = numbers.size() - 1; i >= 0; --i) {
            cout << numbers[i];
            if (i > 0) {
                cout << " ";
            }
        }
        return 0;
    }

};

//Uncomment the below code before pasting inside HackerRank
/*
int main() {
    string size;
    string input;
    vector<int> numbers;

    getline(cin, size);
    getline(cin, input);

    istringstream iss(input);

    int number;
    while (iss >> number) {
        numbers.push_back(number);
    }

    return Arrays::solution(stoi(size), numbers);
}*/
