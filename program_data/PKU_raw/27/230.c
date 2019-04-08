int main()
{
    int n;
    int i;
    scanf("%d",&n);
    double a[100],b[100],c[100],x1[100],x2[100],re[100],im[100];
    double dlta[100];
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        dlta[i]=b[i]*b[i]-4*a[i]*c[i];
        if(dlta[i]==0)
        {
            x1[i]=-b[i]/a[i]/2;
            printf("x1=x2=%.5lf\n",x1[i]);
        }
        else if(dlta[i]<0)
        {
            im[i]=sqrt(0-dlta[i])/2/a[i];
            re[i]=-b[i]/a[i]/2;
            if(re[i]==0)
            {
                re[i]=0;
            }
            printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",re[i],im[i],re[i],im[i]);
        }
        else
        {
            x1[i]=(-b[i]+sqrt(dlta[i]))/2/a[i];
            x2[i]=(-b[i]-sqrt(dlta[i]))/2/a[i];
            printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
        }
    }
}