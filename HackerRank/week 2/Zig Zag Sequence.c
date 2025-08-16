#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void findZigZagSequence(int a[], int n) {
    int mid = (n - 1) / 2;
    qsort(a, n, sizeof(int), compare);

    swap(&a[mid], &a[n - 1]);

    int st = mid + 1;
    int ed = n - 2;
    while (st <= ed) {
        swap(&a[st], &a[ed]);
        st++;
        ed--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        findZigZagSequence(a, n);
    }

    return 0;
}
