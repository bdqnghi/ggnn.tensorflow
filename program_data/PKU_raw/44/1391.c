int invert(int x)
{
    int y=0;
    for(x;x!=0;x/=10)
        y=x%10+y*10;
    return y;
}
main()
{
    int i,a[6],b[6];
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    for(i=0;i<6;i++)
    b[i]=invert(a[i]);
    for(i=0;i<6;i++)
    printf("%d\n",b[i]);
}
