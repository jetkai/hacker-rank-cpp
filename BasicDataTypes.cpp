#include <cstdio>
using namespace std;

class BasicDataTypes {

public:
    static int solution() {
        // Complete the code.
        int i;
        long l;
        char ch;
        float f;
        double d;

        scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);

        printf("%d\n%ld\n%c\n%f\n%lf", i, l, ch, f, d);

        return 0;
    }

};

//Uncomment the below code before pasting inside HackerRank
//int main() {
//    return BasicDataTypes::solution();
//}