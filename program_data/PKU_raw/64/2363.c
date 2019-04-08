int read();
void calculate();
void sort();
double sqr(double p);
int print();
int x[100],y[100],z[100],n;
double a[100][100];
int main()
{
    read();
    calculate();
    print();
    return 0;
}
int read()
{
    int i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        scanf ("%d%d%d",&x[i],&y[i],&z[i]);
    return 0;
}
void calculate()
{
    int i,j;
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            a[i][j]=sqr((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
    return;
}
int print()
{
    int i,j,k,l,p;
    double max;
    p=n*(n-1)/2;
    while (p>0)
    {
        max=-1;
        for (i=1;i<n;i++)
            for(j=n;j>i;j--)
            {
                if (max<a[i][j])
                {
                max=a[i][j];
                 k=i;
                  l=j;
                   }
                 else if (max==a[i][j])
                {
                    if (k>i) {
                        k=i;
                        l=j;
                    }
                    else if (k==i&&l>j)
                    {
                        l=j;
                    }
                }
            }
        printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[k],y[k],z[k],x[l],y[l],z[l],a[k][l]);
        a[k][l]=-100;
        p--;
    }
    return 0;
}
double sqr(double p)
{
    double x1,x2;
    x2=p;
    x1=1.0;
    while (fabs(x2-x1)>1e-10)
    {
        x1=x2;
        x2=(x1+p/x1)/2;
    }
    return x2;
}
