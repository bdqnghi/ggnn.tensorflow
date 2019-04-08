int main()
{
    char a[7];
    int n,i,j,p,q;
    p=0;q=0;
    scanf("%d",&n);
    float m[50],f[50],g;
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        if(a[0]=='m')
        {
            scanf("%f",&m[p]);
            p=p+1;
        }
        else
        {
            scanf("%f",&f[q]);
            q=q+1;
        }
    }
    for(i=0;i<p-1;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(m[i]>m[j])
            {
                g=m[i];
                m[i]=m[j];
                m[j]=g;
            }
        }
    }
    for(i=0;i<p;i++)
    printf("%0.2f ",m[i]);
    for(i=0;i<q-1;i++)
    {
        for(j=i+1;j<q;j++)
        {
            if(f[i]<f[j])
            {
                g=f[i];
                f[i]=f[j];
                f[j]=g;
            }
        }
    }
    for(i=0;i<q-1;i++)
    printf("%0.2f ",f[i]);
    printf("%0.2f",f[q-1]);
    return 0;
}
