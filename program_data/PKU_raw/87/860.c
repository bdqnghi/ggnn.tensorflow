int main()
{
    int a[100][6];
    int i,q,z,x,y,m;
    for(i=0;i<100;i++)
    {
        for(q=0;q<6;q++)
        {
            scanf("%d",&a[i][q]);
        }
        if(a[i][0]==0&&a[i][1]==0&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0)
        {
            m=i;
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        x=3600*a[i][0]+60*a[i][1]+a[i][2];
        y=3600*(a[i][3]+12)+60*a[i][4]+a[i][5];
        z=y-x;
        printf("%d\n",z);
    }
    return 0;
}
