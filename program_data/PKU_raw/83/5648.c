
int main()
{
    int n;
    scanf("%d\n",&n);
    int i,a[n],c[n];
    double b[n],d[n],m,f,s;
    m=f=0;
    for(i=0;i<n;i++) scanf("%d",&c[i]);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<=100&&a[i]>=90) b[i]=4.0;
        if(a[i]<=89&&a[i]>=85)  b[i]=3.7;
        if(a[i]<=84&&a[i]>=82)  b[i]=3.3;
        if(a[i]<=81&&a[i]>=78)  b[i]=3.0;
        if(a[i]<=77&&a[i]>=75)  b[i]=2.7;
        if(a[i]<=74&&a[i]>=72)  b[i]=2.3;
        if(a[i]<=71&&a[i]>=68)  b[i]=2.0;
        if(a[i]<=67&&a[i]>=64)  b[i]=1.5;
        if(a[i]<=63&&a[i]>=60)  b[i]=1;
        if(a[i]<=59)   b[i]=0;
    }
    for(i=0;i<n;i++) d[i]=b[i]*c[i];
    for(i=0;i<n;i++) {m=m+d[i]; f=f+c[i];}
    s=m/f;
    printf("%.2lf",s);
    return 0;
}


