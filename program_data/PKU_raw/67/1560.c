main()
{
    int n,i;
    float a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        scanf("%f",&b[i]);
        c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
        if(c[i]-c[0]>0.05)
        printf("better");
        else if(c[i]-c[0]<-0.05)
        printf("worse");
        else
        printf("same");
        printf("\n");
    }
}