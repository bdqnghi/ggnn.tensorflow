
int is_relativeto_7(int n);

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
        if (!is_relativeto_7(i)) 
            sum += i*i;

    printf("%d", sum);
    return 0;
}

int is_relativeto_7(int n)
{
    int sh = n;
    if ((n % 7) == 0) return 1;
    do {
        if ((sh % 10) == 7) return 1;
        sh = sh / 10;
    } while (sh > 0);

    return 0;
}