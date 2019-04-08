int main()
{
    int start[1001],end[1001],sum[10001]={0},i,j,k,max1,max2;
    char c;
    for(i=0;c!='\n';i++)
        scanf("%d%c",&start[i],&c);
    for(c='p',i=0;c!='\n';i++)
        scanf("%d%c",&end[i],&c);
    for(k=0;k<i;k++)
    {
        for(j=start[k];j<end[k];j++)
        {
            sum[j]++;
        }
    }
    for(k=0,max1=end[0];k<i;k++)
    {
        if(end[k]>max1)
        max1=end[k];
    }
    for(k=0,max2=sum[0];k<max1;k++)
    {
        if(max2<sum[k])
        max2=sum[k];
    }
    printf("%d %d",i,max2);
    return 0;
}
