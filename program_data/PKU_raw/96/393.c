int main()
{
    char a[101];
    char b[101];
    int c,d,e,i,u,v,w,x,y;
    int n=0;
    scanf("%s",a);
    while(a[n])
    n=n+1;
    if(n>=3)
    {
        u=a[0]-'0';
        v=a[1]-'0';
        w=u*10+v;
        if(w<=12)
        {
            u=3;
            v=a[1]-'0';
            w=a[2]-'0';
            v=100+v*10+w;
        }
        else
        {
            u=2;
            v=a[0]-'0';
            w=a[1]-'0';
            v=v*10+w;
        }
        x=v/13;
        y=v%13;
        b[0]=x+'0';
        e=0;
        for(i=u;i<=n-1;i++)
        {
            c=a[i]-'0';
            d=y*10+c;
            x=d/13;
            y=d%13;
            e=i-u+1;
            b[e]=x+'0';
        }
        b[e+1]='\0';
        printf("%s\n",b);
        printf("%d\n",y);
    }
    else
    {
        c=a[0]-'0';
        if(n==2)
        {
            d=a[1]-'0';
            e=c*10+d;
        }
        else
        {
            e=c;
        }
        x=e/13;
        y=e%13;
        printf("%d\n",x);
        printf("%d\n",y);
    }

    return 0;
}