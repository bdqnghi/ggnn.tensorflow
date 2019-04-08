int main()
{
    int n,i,j=0,max;
    int bp[N][2];
    int sz[N];
    int hou[N];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d%d",&bp[i][0],&bp[i][1]);
    }
    for(i=0;i<=n-1;i++)
    {
        sz[i]=0;
        hou[i]=0;
    }
    for(i=0;i<=n-1;i++)
    {
        if(((bp[i][0]>=90)&&(bp[i][0]<=140))&&((bp[i][1]>=60)&&(bp[i][1]<=90)))
        {
          sz[i]=1;
        }         
    
    }
    sz[n]=0;
    for(i=0;i<=n;i++)
    {
        if(sz[i]==1)
        {
           j++; 
        }
        else
        {
            hou[i]=j;
            j=0;
        }
    }             
    max=hou[0];
    for(i=0;i<=n;i++)
    {
        if(max<hou[i])
        {
            max=hou[i];
        }
    }            
    printf("%d",max);
    return 0;
    
}