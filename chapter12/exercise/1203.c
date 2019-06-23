#include <stdio.h>

struct xyz {
    int x;
    long y;
    double z;
};

struct xyz scan_xyz() {
    struct xyz member;

    printf("x："); scanf("%d", &member.x);
    printf("y："); scanf("%ld", &member.y);
    printf("z："); scanf("%lf", &member.z);

    return member;
}

int main(void) {
    struct xyz s = scan_xyz();

    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);

    return 0;
}