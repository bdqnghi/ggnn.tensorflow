int main()
{
    int up,down;
    int temp1,temp2;
    double temp3;
    up=2;down=1;
    int n,m;
    double c,sum;
    scanf("%d",&n);
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    for(int i=0;i<=n-1;i++)
    {
        c=(float)2/(float)1;
        sum=c;
        scanf("%d",&m);
        if(m==1)
        {
            printf("2.000\n");
        }
        else
        {
            for(a1=0;a1<=m-2;a1++)
            {
                c=1+1/c;
                sum=sum+c;
            }
        }
        if(m!=1)
        {
            printf("%.3f\n",sum);
        }
    }







}


