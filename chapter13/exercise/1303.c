#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void) {
    FILE *fp;
    int ninzu = 0;           /*人数*/
    Student stu[50];         /*学生*/
    double hsum = 0.0;       /*身高合计*/
    double wsum = 0.0;       /*体重合计*/

    if ((fp = fopen("hw.dat", "r")) == NULL) { /*打开文件*/
        printf("\a文件打开失败！！！\n");
    } else {

        while (fscanf(fp, "%s%lf%lf", stu[ninzu].name, &stu[ninzu].height, &stu[ninzu].weight) == 3) {           
            hsum += stu[ninzu].height;
            wsum += stu[ninzu].weight;
            ninzu++;
        }

        sort_by_height(stu, ninzu);

        for (int i = 0; i < ninzu; i++) {
            printf("%-10s  %5.1f. %5.1f\n", stu[i].name, stu[i].height, stu[i].weight);
        }

        printf("--------------------------\n");
        printf("平均    %5.1f  %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp); /*关闭文件*/
    }

    return 0;
}