
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for (i=1;i<=5;i++)
    {
        a=n%10;
        printf("%d",a);
        n=(n-a)/10;
        if (n==0)
        break;
    }
}