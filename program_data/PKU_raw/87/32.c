int main()
{
    int g,j,a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],i,h,sum,s,m,u[6],q;
    for(i=0;i<1000;i++)
    {
            scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
            q=i;
            if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
            break;
    }
    for(j=0;j<q;j++)
    {
                    h=d[j]-a[j]+12;
                    m=e[j]-b[j];
                    s=f[j]-c[j];
                    sum=0;
                    sum=3600*h+60*m+s;
                    printf("%d\n",sum);
    }
    scanf("%d",&g);
    return 0;
}
