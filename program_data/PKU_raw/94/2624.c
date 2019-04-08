int main()
{
    int N,sz[500],i,js[500],j=1,e,k,s=0,h=0;
    scanf("%d\n",&N);
    for(i=1;i<=N;i++,s++)
    {
         scanf("%d",&(sz[i]));
    }
    for(k=1;k<=s;k++)
    {
        for(i=0;i<=s-k;i++)
        {
            if(sz[i]>sz[i+1])
            {
                 e=sz[i+1];
                 sz[i+1]=sz[i];
                 sz[i]=e;
            }
        }
    }
    for(i=1;i<=s;i++)
    {
        if(sz[i]%2!=0)
        {
             js[j]=sz[i];
             j=j+1;
             h=h+1;
        }
    }
    for(j=1;j<=h-1;j++)
    {
         printf("%d,",js[j]);
    }
    printf("%d",js[h]);
    return 0;
}