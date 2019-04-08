
int main()
{
    int i;
    int n;
    int buf;
    int *array;
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", array + i);
    }
    for (i = n - 1; i >= 0; i--) {
        if (i != n - 1) {
            printf(" ");
        }
        printf("%d", *(array + i));
    }
    return 0;
}