
int main()
{
    int a[300];
    int n, i, j, k;

    /* ???? */
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    /* ?????? */
    for (i=1, k=1; i<n; i++) {
        /* ?????? */
        for (j=0; j<k; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        /* ?????????? */
        if (j==k) {
            a[k] = a[i];
            k++;
        }
    }

    /* 0..k-1????????????? */
    for (i=0; i<k; i++) {
        if (i == 0) {
            printf("%d", a[i]);
        } else {
            printf(",%d", a[i]);
        }
    }
    return 0;
}