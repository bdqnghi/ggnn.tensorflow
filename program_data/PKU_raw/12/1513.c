int main()
{
    int a[15][16]={{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},c,m;
    for(m=0;m<100;m++)
    {
            for(c=0;c<16;c++)
            {
            scanf("%d",&a[m][c]);
            if(a[m][c]<=0)break;
            }
            if(a[m][0]<=0)break;
            int b,d,e,f=0;
            for(b=0;b<c;b++)
            {
            d=a[m][b]*2;
            for(e=0;e<c;e++)
            {
            if(d==a[m][e])f++;
            }
             }
           printf("%d\n",f);
    }}