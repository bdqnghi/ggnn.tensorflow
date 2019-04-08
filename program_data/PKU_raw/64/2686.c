int main()
{
    double n,x[100],y[100],z[100],c[100],l[100][100],e;
    int a[1000],b[1000],i,j,m,p,q;
    scanf("%lf",&n);
    m=0;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {  
            l[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            c[m]=l[i][j];
            a[m]=i;
            b[m]=j;
            m=m+1;
        }
    }
    for(p=0;p<m;p++)
    {
        for(q=0;q<(m-1-p);q++)
        {
            if(c[q]>c[q+1])
            {
                e=c[q+1];
                c[q+1]=c[q];
                c[q]=e;
                e=a[q+1];
                a[q+1]=a[q];
                a[q]=e;
                e=b[q+1];
                b[q+1]=b[q];
                b[q]=e;
            }
        }
    }
    for(p=0;p<m;p++)
    {
        for(q=0;q<(m-1-p);q++)
        {
            if(c[q]==c[q+1])
            {
                if(a[q]<a[q+1]||b[q]<b[q+1])
                {
                    e=a[q+1];
                    a[q+1]=a[q];
                    a[q]=e;
                    e=b[q+1];
                    b[q+1]=b[q];
                    b[q]=e;
                }
            }
        }
    }
    for(i=m-1;i>=0;i--)
    {
        printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],c[i]);
    }
    return 0;
}




