#include <stdio.h>

void change(int a[], int v) {
    a[0] = 2; // modifies original array!
    v = 2;
}

int main() {
    int array[1] = {1};  // array is [1]
    int val = 1;
    change(array, val);
    printf("%d, %d\n", array[0], val); // 2, 1
}
