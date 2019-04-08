struct dian
{
    int z[6];
    double d;
};
double ju(int x[3],int y[3])
{
    double d;
    d=sqrt((x[0]-y[0])*(x[0]-y[0])+(x[1]-y[1])*(x[1]-y[1])+(x[2]-y[2])*(x[2]-y[2]));
    return d;
}
int main()
{
    int n,i,j,a[20][3],x=0;
    struct dian num[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            num[x].z[0]=a[i][0];
            num[x].z[1]=a[i][1];
            num[x].z[2]=a[i][2];
            num[x].z[3]=a[j][0];
            num[x].z[4]=a[j][1];
            num[x].z[5]=a[j][2];
            num[x].d=ju(a[i],a[j]);
            x++;
        }
    }
    n=n*(n-1)/2;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(num[j].d<num[j+1].d)
            {
                num[49]=num[j+1];
                num[j+1]=num[j];
                num[j]=num[49];
            }
        }
    }
    for(i=0;i<n;i++)
    { 
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",num[i].z[0],num[i].z[1],num[i].z[2],num[i].z[3],num[i].z[4],num[i].z[5],num[i].d);
    }
    return 0;
}