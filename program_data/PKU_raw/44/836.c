void main()
{
    void re(int n);
    int n,i;
    for( i=0;i<6;i++)
    {
    scanf("%d",&n);
    re(n);
    }
}
void re(int n)
{
    int c[10]={0};
    int h=1,sum=0,i,j;
    if(n<0){printf("-");n=-n;}
    for (i=0;n!=0;i++)
    {
        c[i]=n%10;
        n/=10;
    }
    for(j=0;j<i;j++)
    {
        sum+=(c[i-j-1]*h);
        h*=10;
    }
    printf("%d\n",sum);
}
