int main()
{
    int i,n,j,k,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},sum=0;
    scanf("%d %d %d",&n,&j,&k);
    for(i=0;i<=j-1;i++)
    {
                    sum=sum+a[i];
    }
    if(n%400==0||(n%4==0&&n%100!=0))
    {
                                    if(j<=2)
                                    {
                                            sum=sum+k;
                                    }
                                    else
                                    {
                                        sum=sum+1+k;
                                    }
    }
    else
    {
        sum=sum+k;
    }
    printf("%d",sum);
    getchar();
    getchar();
    getchar();
    
}