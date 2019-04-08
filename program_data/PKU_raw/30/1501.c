int seven(int a)
{
    int mod;
    if (a%7==0)return 1;
    while(a>0)
    {mod=a%10;
    if(mod==7)return 1;
    a/=10;}
    return 0;
}
int main()
{
    int n,i;
    int sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    if(seven(i)!=1)sum=sum+i*i;
    PD(sum);
    return 0;
}