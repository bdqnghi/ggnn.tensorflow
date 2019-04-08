int main()
{
    int n,i;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
                    if((i%7)==0)
                    {
                             continue;
                    }
                    if((i%10)==7)
                    {
                              continue;
                    }
                    if((i/10)==7)
                    {
                                   continue;
                    }                    
                    sum+=i*i;
    }
    printf("%d",sum);
    return 0;
}