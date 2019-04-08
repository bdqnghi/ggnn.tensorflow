int main()
{
    int n;
    scanf("%d", &n);
    int i=1;
    int k;
    int sum=0;
    int x[10];
    if(n==0)
    printf("0");
    else
    {
    while(n!=0)
    {
               
               x[i]=n%10;
               n=n/10;
               i++;
    }
    i=i-1;

    for(k=1;k<=i;k++)
    {
                     printf("%d", x[k]);
    }
    }

    return 0;
}
