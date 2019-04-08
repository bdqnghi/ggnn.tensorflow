int main()
{
    float a[100]={0};
    float b[100]={0};
    float c[100]={0};
    float d=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&a[i],&b[i]);
        if(i==0)
        {
            c[i]=b[i]/a[i];
            d=c[i];
        }

    }
    for(i=1;i<n;i++)
        {
            c[i]=(float)(b[i]/a[i]);
            if((c[i]-d)>0.05)
            {
                printf("better\n");
            }
            else if((c[i]-d)<-0.05)
            {
                printf("worse\n");
            }
            else
            printf("same\n");
        }
    return 0;
}
