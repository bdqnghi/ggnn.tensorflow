void f(int n)
{
    if(n==1) printf("End\n");
    else
    {
        if(n%2==0)
        {
            printf("%d/2=%d\n",n,n/2);
            n=n/2;
            f(n);
        }
        else
        {
            printf("%d*3+1=%d\n",n,n*3+1);
            n=n*3+1;
            f(n);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    f(n);
}

