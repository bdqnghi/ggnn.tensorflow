int main()
{
    int x, y, i, a, b, m[20], n[20], j,f=0;
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("%d",x);
    }
    else
    {
    i=0;
    while(x>0)
    {
        m[i]=x;
        x=x/2;
        i++;
    }
    i=0;
    while(y>0)
    {
        n[i]=y;
        y=y/2;
        i++;
    }
    for(i=0;i<13;i++)
    {
        for(j=0;j<13;j++)
        {
            if(m[i]==n[j])
                if(f==0){printf("%d",m[i]);
                         f=1;}
        }
    }
    }
    return 0;
}