int max(int a,int b)
{
    if(a<1||b<1)
    return 0;
    if (a==1||b==1)
    return 1;
        if(a<b)
        return max(a,a);
        if
        (a==b) return (max(a,b-1)+1);
        if(a>b)
        return (max(a-b,b)+max(a,b-1));
}
int main ()
{
    int t,a[20],b[20],i,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
     for(i=0;i<t;i++)
    {
        m=max(a[i],b[i]);
        printf("%d\n",m);
    }
}


