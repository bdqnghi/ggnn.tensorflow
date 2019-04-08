int f(char a,char b)
{
    char c,d;
    c=b+'A'-'a';
    d=b-'A'+'a';
    if((a==b)||(a==c)||(a==d))
    return 1;
    else
    return 0;
}
int g(char a)
{
    char b;
    int c,d;
    c=a-'A';
    d='a'-'A';
    if(c<d)
    return a;
    else
    {
        b=a+'A'-'a';
        return b;
    }
}
int h(int a,int b)
{
    int i;
    int c=1;
    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    return c;
}
int main()
{
    char a[1001];
    char b[5001];
    char c,d;
    scanf("%s",a);
    int i,j,k,l,m,n,p,q,count;
    i=j=n=0;
    count=1;
    while(a[i])
    {
        n=n+1;
        i=i+1;
    }
    i=0;
    for(i=1;i<=n;i++)
    {
        c=g(a[i-1]);
        d=g(a[i]);
        q=c-d;
        if(q==0)
        count=count+1;
        else
        {
            b[j]='(';
            j++;
            b[j]=g(a[i-1]);
            j++;
            b[j]=',';
            j++;
            p=1;
            for(k=1;k<=1000;k++)
            {
                l=h(10,k);
                m=count/l;
                if(m!=0)
                p=p+1;
                else
                k=1001;
            }
            for(k=1;k<=p;k++)
            {
                b[j]=(count/h(10,p-k))%10+'0';
                j++;
            }
            b[j]=')';
            j++;
            count=1;
        }
    }
    b[j]='\0';
    printf("%s",b);
    return 0;
}