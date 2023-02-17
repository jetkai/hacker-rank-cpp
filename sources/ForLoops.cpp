#include <iostream>
#include <vector>
using namespace std;

class ForLoops {

    static string valueIsEvenOrOdd(int number) {
        return number % 2 == 0 ? "even" : "odd";
    }

    static string numberAsWord(int number) {
        vector<string> words{"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
        return words[number];
    }

public:
    static int solution() {
        int a, b;
        cin >> a;
        cin >> b;

        for (int i = a; i <= b; i++) {
            cout << (i <= 9 ? numberAsWord(i) : valueIsEvenOrOdd(i)) << endl;
        }

        return 0;
    }
};

//Uncomment the below code before pasting inside HackerRank
//int main() {
//    return ForLoops::solution();
//}