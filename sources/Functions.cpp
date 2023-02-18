#include <cstdio>
using namespace std;

class Functions {

static int max_of_four(int a, int b, int c, int d) {
    if(a > b && a > c && a > d) {
        return a;
    } else if(b > a && b > c && b > d) {
        return b;
    } else if (c > a && c > b && c > d) {
        return c;
    } else {
        return d;
    }
}

public:
    static int solution() {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int ans = max_of_four(a, b, c, d);
        printf("%d", ans);

        return 0;
    }
};

//Uncomment the below code before pasting inside HackerRank
//int main() {
//    return Functions::solution();
//}