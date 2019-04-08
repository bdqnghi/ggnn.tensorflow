int main(){
    int a[1000];
    int i, j, n, k;
    scanf("%d%d", &n, &k);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (a[i]+a[j] == k) {
                printf("yes");
                return 0;
            }
        }
    }
    printf("no");
    return 0;
}
