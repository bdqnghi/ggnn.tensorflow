int main()
{
    int i,k,m,n,h,d,g;
    int a[10],b[10],c[10],p[50],q[50];
    double s[50],max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=1,m=0;i<n;i++)
    {
        for(k=i+1;k<=n;k++)
        {
            m++;
            s[m]=sqrt((a[i]-a[k])*(a[i]-a[k])+(b[i]-b[k])*(b[i]-b[k])+(c[i]-c[k])*(c[i]-c[k]));
            p[m]=i;
            q[m]=k;
        }
    }
    for(i=1;i<=m;i++)
    {
        for(k=1;k<=m-i;k++)
        {
            if(s[k]<s[k+1])
            {
                max=s[k];
                s[k]=s[k+1];
                s[k+1]=max;
                h=p[k];
                p[k]=p[k+1];
                p[k+1]=h;
                d=q[k];
                q[k]=q[k+1];
                q[k+1]=d;
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        h=p[i];
        d=q[i];
    	
   printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[h],b[h],c[h],a[d],b[d],c[d],s[i]); 
    }
    return 0;

}

