int main()
{
    int k,i;
    scanf ("%d",&k);
    for (i=0;i<k;i++)
    {
        int m,n,**p,a,b,sum;
        scanf ("%d%d",&m,&n);
        p=(int**)malloc(m*sizeof(int*));
        for (a=0;a<m;a++)
        p[a]=(int*)malloc(n*sizeof(int));
        for (a=0;a<m;a++)
        {
            for (b=0;b<n;b++)
            scanf ("%d",*(p+a)+b);
        }
        sum=0;
        for (b=0;b<n;b++)
        sum=sum+*(*p+b)+*(*(p+m-1)+b);
        for (a=1;a<m-1;a++)
        sum=sum+**(p+a)+*(*(p+a)+n-1);
        printf ("%d\n",sum);
    }
    return 0;
}
