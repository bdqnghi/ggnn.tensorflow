int f(int a)
{
    int i=2,m;
    m=sqrt(a);
    for(i=2;i<=m;i++)
    {
        if(a%i==0)break;
    }
    if(i>=m+1)return a;
    else return 0;
}
int main()
{
    int m;
    scanf("%d",&m);
    int i,p,q;
    for(i=3;i<=m/2;i=i+2)
    {
        p=f(i);q=f(m-i);
        if(p!=0&&q!=0)printf("%d %d\n",p,q);
    }


}
