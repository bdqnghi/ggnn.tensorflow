void main()
{
    int k,n,a=1,i,b;
    scanf("%d %d",&n,&k);
    for(a=1;;a++)
    {
        i=0;
        b=a;
        while(a%(n-1)==0)
        {
            a=n*a/(n-1)+k;
            i=i+1;
        }
        if(i==n)break;
        else a=b;
    }
        printf("%d",a);
}
