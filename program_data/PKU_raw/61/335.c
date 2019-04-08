int f(int x)
{
    if(x==1)return 1;
    else if(x==2)return 1;
    else 
    return f(x-2)+f(x-1);
}
main()
{
    int n,i;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d\n",f(a[i]));
}
