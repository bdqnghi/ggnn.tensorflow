int main()
{
    int n,i,a,b,sum=0,huk=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==1&&b==0||a==0&&b==2||a==2&&b==1)
        {
            huk++;
        }
        if(a==0&&b==1||a==1&&b==2||a==2&&b==0)
        {
            sum++;
        }
    }
    if(sum>huk)
    printf("A");
    else if(sum<huk)
    printf("B");
    else
    printf("Tie");
    return 0;
}
