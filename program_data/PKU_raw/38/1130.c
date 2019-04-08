
double sz[100];

void Read(double n)
{
    int i;

    for(i=0; i<n; i++)
        scanf("%lf", (sz+i));
}

void Calculate(double n)
{
    int i;
    double S, x, sum=0;

    for(i=0; i<n; i++)
        sum+=*(sz+i);

    x=sum/n;

    sum=0;
    for(i=0; i<n; i++)
        sum+=pow((*(sz+i)-x),2);

    S=pow((sum/n),0.5);

    printf("%.5f\n", S);
}

int main()
{
    int m, i;
    double n;

    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%lf", &n);
        Read(n);
        Calculate(n);
    }

    return 0;
}