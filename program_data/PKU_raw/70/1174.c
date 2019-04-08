int main()
{
    int k,i,j;
    float a[200],b[200],max=0.0,mid=0.0;
    double c[200],d[200];

    scanf("%d",&k);

    for(i=0;i<=k-1;i++)
    {
        scanf("%f %f",&a[i],&b[i]);
        c[i]=(double)a[i];
        d[i]=(double)b[i];
    }
    for(i=0;i<=k-2;i++)
    {
        for(j=i+1;j<=k-1;j++)
        {
            mid=sqrt((c[i]-c[j])*(c[i]-c[j])+(d[i]-d[j])*(d[i]-d[j]));
            if(mid>max)
               max=mid;
        }
    }
    
    printf("%.4f\n",max);

    return 0;
}