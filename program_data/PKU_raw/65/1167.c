int main ()
{
    int n,a=0,b=0,c;
    scanf("%d",&n);
    int sz[n][2];
    for (int i=0;i<n;i++)
    {
        scanf("%d%d\n",&sz[i][0],&sz[i][1]);
        c=sz[i][0]-sz[i][1];
        if(c==-1||c==2)
        {
            a++;
        }
        if(c==1||c==-2)
        {
            b++;
        }
    }
    if(a>b)
    {
        printf("A");
    }
    if(a<b)
    {
        printf("B");
    }
    if(a==b)
    {
        printf("Tie");
    }
    
    return 0;
}

