int prime(int n)
{
    int i,flag=0;
    int t=sqrt(n);
    for(i=2;i<=t;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    return 0;
    else
    return 1;
}
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=3;i<=n-2;i++)
    {
        if((prime(i)==1)&&(prime(i+2)==1))
        {
            printf("%d %d\n",i,i+2);
            flag=1;
        }        
    }
    if(flag==0)
    printf("empty");
    return 0;
}
