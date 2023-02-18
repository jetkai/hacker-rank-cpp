#include <cstdio>
#include <cstdlib>

class Pointer {

    static void update(int *a, int *b) {
        int _b = abs(*a - *b);
        *a = (*a + *b);
        *b = _b;
    }

public:
    static int solution() {
        int a, b;
        int *pa = &a, *pb = &b;

        scanf("%d %d", &a, &b);
        update(pa, pb);
        printf("%d\n%d", a, b);

        return 0;
    }

};

//Uncomment the below code before pasting inside HackerRank
//int main() {
//    return Pointer::solution();
//}