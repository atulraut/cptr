#include <stdio.h>

int main() {
    int arr[2][3][4] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    printf("arr[0][1][2] = %d\n", arr[0][1][2]);
    printf("arr[0][1][2] = %d\n", *(*(*(arr+0)+1)+2));
    return 0;
}


