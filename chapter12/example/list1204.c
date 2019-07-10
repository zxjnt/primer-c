/*
    拥有超能力的洋子
*/
#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
};

/*将std指向的学生的身高变为180cm，体重变为80kg*/
void hiriko(struct student *std) {
    if ((*std).height < 180) { (*std).height = 180; }

    if ((*std).weight > 80) { (*std).weight = 80; }

    /*另一种写法*/
    if (std->height < 180) { std->height = 180; }

    if (std->weight > 80) { std->weight = 80; }
}


int main(void) {
    struct student sanaka = {"Sanaka", 175, 62.5, 73000};

    hiriko(&sanaka);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}