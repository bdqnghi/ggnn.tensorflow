
int main()
{
    int a[300];
    int n, i, j;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    if (n>0) {
        printf("%d", a[0]);
    }
    for (i=1; i<n; i++) {
        for (j=0; j<i; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        if (i==j) {
            printf(",%d", a[i]);
        }
    }
    return 0;
}
