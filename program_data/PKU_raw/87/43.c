int main()
{
    int a[100],b[100],c[100],d[100],e[100],f[100],s[100],p,i=0;
    for(p=0;p<100;p++)
    {
                      s[p]=0;
    }
    for(p=0;p<100;p++)
    {
                    scanf("%d %d %d %d %d %d",&a[p],&b[p],&c[p],&d[p],&e[p],&f[p]);
                    i++;
                    if(a[p]==0&&b[p]==0&&c[p]==0&&d[p]==0&&e[p]==0&&f[p]==0)
                    {
                                                          break;
                    }
    }
    for(p=0;p<i-1;p++)
    {
    if(f[p]>=c[p])
    {
            s[p]+=f[p]-c[p];
    }
    else
    {
        s[p]+=f[p]+60-c[p];
        e[p]--;
    }
    if(e[p]>=b[p])
    {
            s[p]+=(e[p]-b[p])*60;
    }
    else
    {
        s[p]+=(e[p]+60-b[p])*60;
        d[p]--;
    }
    s[p]+=(d[p]+12-a[p])*3600;
    }
    for(p=0;p<i-1;p++)
    {
                    printf("%d\n",s[p]);
    }
    return 0;
}