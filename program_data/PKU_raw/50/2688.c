int main()
{
    int a[12]={0,31,59,90,120,151,181,212,243,273,304,334};
    int i,j,w;
    scanf("%d",&w);
    for(i=0;i<=11;i++)
    {
        if((a[i]+13-1+w)%7==5)
        printf("%d\n",i+1);
    }
    return 0;
}
