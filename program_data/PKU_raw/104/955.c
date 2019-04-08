void main()
{
    void f(int a[],int n);
    int x,y,s,t,j;
    int a[11],b[11];
    for(j=0;j<11;j++)
    {
        a[j]=0;
        b[j]=0;
    }
    scanf("%d%d",&x,&y);
    f(a,x);
    f(b,y);

    for(j=10;j>=0;j--)
    {
        if(a[j]!=0) {s=j;break;}
    }
    for(j=10;j>=0;j--)
    {
        if(b[j]!=0) {t=j;break;}
    }
    for(j=1;j<=s&&j<=t;j++)
    {
        if(a[s-j]!=b[t-j])
        {
            printf("%d",a[s-j+1]);
            break;
        }
    }
    if(j==s+1) printf("%d",a[0]);
    else{
    if(j==t+1) printf("%d",b[0]);
    }
}
void f(int a[],int n)
{
    int i;
    a[0]=n;
    n=n/2;
    for(i=1;n>0;i++)
    {
        if(n%2==0)
        {
            a[i]=n;
            n=n/2;
        }
        else
        {
            a[i]=n;
            n=(n-1)/2;
        }
    }
}