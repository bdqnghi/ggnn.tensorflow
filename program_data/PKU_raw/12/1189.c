int main()
{
    char exp;
    int i,c,t,w,n,s,t2,j,k,a[16];
    long m,e;
    float x,y;
    double r,d,b,h,g[100];



    for (; ;)
    {
        for (i=0;i<=15;i++) a[i]=0;
        for (i=0;i<=15;i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==0) break;
            if(a[i]==-1) return 0;

        }
        n=i;
        s=0;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
                if (a[j]==2*a[i]) s=s+1;
        }
        printf("%d\n",s);
    }
    return 0;
}
