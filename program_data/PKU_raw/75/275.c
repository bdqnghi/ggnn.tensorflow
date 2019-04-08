int main()
{
    int i,j,n,x[1005],y[1005],mark,max=0;
    char c;
    scanf("%d",&x[0]);
    i=1;
    while((c=getchar())==',')
    {
        scanf("%d",&x[i]);
        i++;
    }
    scanf("%d",&y[0]);
    i=1;
    while((c=getchar())==',')
    {
        scanf("%d",&y[i]);
        i++;
    }
    n=i;
    for(i=0;i<1000;i++)
    {
        mark=0;
        for(j=0;j<n;j++)
        {
            if(i>=x[j]&&i<y[j])
            mark++;
        }
        max=(max>mark)?max:mark;
    }
    printf("%d %d",n,max);
}
