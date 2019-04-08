

int apple(int n, int k)
{
    if(n==2)
        return 2*pow(n,n)-(n-1)*k;
    else
        return pow(n,n)-(n-1)*k;
}

int main()
{
    int n,k;

    scanf("%d %d", &n, &k);
    printf("%d\n", apple(n,k));

    return 0;
}