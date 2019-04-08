int main()
{
    int n,i,j,m;
    double a[10],b[10],c[10],d[10],h,g;
    float GPA;
    g=0;
    h=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&a[i]);
        g=g+a[i];
    }
    for(j=1;j<=n;j++)
    {
        scanf("%lf",&b[j]);
        if(b[j]<=100&&b[j]>=90)
        {
            c[j]=4.0;
        }
        else if(b[j]<=89&&b[j]>=85)
        {
            c[j]=3.7;
        }
        else if(b[j]<=84&&b[j]>=82)
        {
            c[j]=3.3;
        }
        else if(b[j]<=81&&b[j]>=78)
        {
            c[j]=3.0;
        }
        else if(b[j]<=77&&b[j]>=75)
        {
            c[j]=2.7;
        }
        else if(b[j]<=74&&b[j]>=72)
        {
            c[j]=2.3;
        }
        else if(b[j]<=71&&b[j]>=68)
        {
            c[j]=2.0;
        }
        else if(b[j]<=67&&b[j]>=64)
        {
            c[j]=1.5;
        }
        else if(b[j]<=63&&b[j]>=60)
        {
            c[j]=1.0;
        }
        else if(b[j]<=59)
        {
            c[j]=0;
        }
    }
    for(m=1;m<=n;m++)
    {
        d[m]=a[m]*c[m];
        h=h+d[m];
    }
    GPA=h/g;
    printf("%.2f",GPA);
    return 0;
}

