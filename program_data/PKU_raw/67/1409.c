void main()
{
    int n,i;
    float a[10000],b[10000],p[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&a[i],&b[i]);
        p[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
        if(p[i]-p[0]>=-0.05&&p[i]-p[0]<=0.05)
            printf("same\n");
        if(p[i]-p[0]>0.05)
            printf("better\n");
        if(p[i]-p[0]<-0.05)
            printf("worse\n");
    }
}
