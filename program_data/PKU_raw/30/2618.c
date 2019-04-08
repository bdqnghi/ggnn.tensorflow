int wu(int n)
{
    if((n%7==0)||(n%10==7)||(n/10==7))
        return 0;
    else
        return 1;
}
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(wu(i))
           sum+=i*i;
    }
    printf("%d\n",sum);
}
