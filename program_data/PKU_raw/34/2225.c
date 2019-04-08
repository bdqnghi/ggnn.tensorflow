

int main()
{
    int i,j,m,n,p;
    char str[10001],a,b;
    scanf("%d",&m);
    while(m!=1)
    {
        if (m%2!=0)
        {
            n=m;
            m=n*3+1;
            printf("%d*3+1=%d\n",n,m);
        }
        else
        {
            p=m;
            m=p/2;
            printf("%d/2=%d\n",p,m);
        }
    }
    printf("End");
}
