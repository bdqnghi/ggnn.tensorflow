int main()
{
    int i,j,k,a,b,x,n;
    char s[10];
    float h,m[1000],f[1000];
    scanf("%d",&n);
    a=0;
    b=0;
    for(i=0;i<n;i++)
    {
                    scanf("%s %f",s,&h);
                    x=strcmp(s,"male");
                    if(x==0)
                    {
                            m[a]=h;
                            a++;
                    }
                    else
                    {
                        f[b]=h;
                        b++;
                    }
    }
    for(i=0;i<a;i++)
    {
                    for(j=0;j<(a-1);j++)
                    {
                                        if(m[j]>m[j+1])
                                        {
                                                       h=m[j];
                                                       m[j]=m[j+1];
                                                       m[j+1]=h;
                                        }
                    }
    }
    for(i=0;i<b;i++)
    {
                    for(j=0;j<(b-1);j++)
                    {
                                        if(f[j]<f[j+1])
                                        {
                                                       h=f[j];
                                                       f[j]=f[j+1];
                                                       f[j+1]=h;
                                        }
                    }
    }
    if(a==0)
    {
            printf("%.2f",f[0]);
            for(i=1;i<b;i++) printf(" %.2f",f[i]);
    }
    if(b==0)
    {
            printf("%.2f",m[0]);
            for(i=1;i<a;i++) printf(" %.2f",m[i]);
    }
    else
    {
        printf("%.2f",m[0]);
        for(i=1;i<a;i++) printf(" %.2f",m[i]);
        for(i=0;i<b;i++) printf(" %.2f",f[i]);
    }
}
