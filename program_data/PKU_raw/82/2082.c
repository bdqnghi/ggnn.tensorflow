int main()
{
    int n,i,j=0,h=0;
    int sz[100][2];
    int sfzc[100]={0};
    int lxsc[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&sz[i][0],&sz[i][1]);
    }
    for(i=0;i<n;i++)
    {
        if((90<=sz[i][0])&&(sz[i][0]<=140))
        {
            if((60<=sz[i][1])&&(sz[i][1]<=90))
            {
                sfzc[i]=1;
            }
        }
    }
    for(i=0;i<n+1;i++)
    {                               
        if(sfzc[i]==1)
        {
            j++;
        }
        else
        {
            lxsc[i]=j;
            j=0;
        }
    }
    for(i=0;i<n+1;i++)
    {
        if(h<lxsc[i])
        {
            h=lxsc[i];
        }
    }
    printf("%d",h);
    return 0;
}

