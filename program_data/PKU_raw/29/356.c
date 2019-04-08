int main()
{
    long int n,i,e,c[100];
    float b[100],a[200],f=0;
    a[1]=1,a[2]=2;
    for(i=3;i<=100;i++)
    {
         a[i]=(a[i-2]+a[i-1]);
    }
    for(i=1;i<=99;i++)
    {
         b[i]=(a[i+1]/a[i]);
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         scanf("%d",&c[i]);
    }
    for(i=1;i<=n;i++)
    {
         f=0;
         for(e=1;e<=c[i];e++)
         {
               f=f+b[e];
         }
         printf("%.3f\n",f);
    }
    getchar();
    getchar();
    getchar();
    getchar();
}