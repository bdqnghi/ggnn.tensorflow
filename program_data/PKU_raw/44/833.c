int fx(int n)
{
    int t=0;
    do
    {
        t=t*10+n%10;
        n/=10;
    }
    while(n!=0);
    return t;
}
int ab(int n)
{
    if(n<0)
    return -ab(-n);
    return fx(n);
}
int main()
{
    int i,t;
    scanf("%d",&t);
    printf("%d",ab(t));
    for(i=1;i<=5;i++)
    {
                     scanf("%d",&t);
    printf("\n%d",ab(t));
    }
   // getch();
    return 0;
}
