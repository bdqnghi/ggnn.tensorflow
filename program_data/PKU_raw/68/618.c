int panduan(int n)
{
    int f=1;
    int i;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
    {
        f=0;
        break;
    }
    return f;
}
int main()
{
    unsigned int n,i,j;

    scanf("%d",&n);
    for( i = 2;i <= n;i+=2)
        for(j=3;j<=i/2;j+=2)
        if(panduan(j))
        {
            if(panduan(i-j))
            {
                printf("%d=%d+%d\n",i,j,i-j);
              break;
            }
		}
}
