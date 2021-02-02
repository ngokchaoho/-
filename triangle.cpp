#include <stdio.h>
#include <algorithm>
#define MAX_N 1000
int main()
{
    int n, a[MAX_N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    std::sort(a, a + n);
    for (int i = n - 1; i >= 2; i--) {
        int len = a[i]+a[i-1]+a[i-2];
        if (a[i-1] + a[i-2] > a[i]) {
            printf("%d", len);
            return 0;
        }
    }
    printf("%d",0);
    return 0;
}