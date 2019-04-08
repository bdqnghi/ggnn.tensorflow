int main()
{
    int apple(int x,int y);
    int i,t,m,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",apple(m,n));
    }
    return 0;
}
int apple(int x,int y)
{
    int p=0;
    if(y==1) p=1;
    else if(x>y) p=apple(x,y-1)+apple(x-y,y);
    else if(x==y) p=apple(x,y-1)+1;
    else p=apple(x,y-1);
    return(p);
}