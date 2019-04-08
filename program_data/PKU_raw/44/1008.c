int f(int x)
{
    int y,v,j;
    v=0;
    for(j=0;x!=0;j++)
    {
        v=v*10+x%10*10;
        x=x/10;
    }
    y=v/10;
    return(y);
}
int main()
{
    int f(int x);
    int i;
    int a[6];
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n",f(a[i]));
    }
    return 0;
}
