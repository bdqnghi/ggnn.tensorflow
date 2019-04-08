
int m, n;

int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}

void input(int *a, int *b)
{
    int i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
}

void sort(int *a, int *b)
{
    qsort(a, n, sizeof(int), cmp);
    qsort(b, m, sizeof(int), cmp);
}

void merge(int *a, int *b, int *c)
{
    int i;
    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++) {
        c[i + n] = b[i];
    }
}

void output(int *c)
{
    int i;
    for (i = 0;i < m + n; i++) {
        printf("%d%s", c[i], i < m + n - 1 ? " " : "\n");
    }
}
int main()
{
    int a[10000] = {0};
    int b[10000] = {0};
    int c[10000] = {0};
    input(a, b);
    sort(a, b);
    merge(a, b, c);
    output(c);
    return 0;
}