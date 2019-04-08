int main()
{
    char a[100],b[100],t;//temp?????????
    int n,m,i,j;//n,m???????,i,j?????????
    scanf("%s %s",a,b);
    n=strlen(a);m=strlen(b);
    if (n==m)
    {
        for(j=0;j<n;j++)
            for(i=0;i<n-j;i++)
            if (a[i]>a[i+1])
            {
                t=a[i];a[i]=a[i+1];a[i+1]=t;
            }
        for(j=0;j<m;j++)
            for(i=0;i<m-j;i++)
            if (b[i]>b[i+1])
            {
                t=b[i];b[i]=b[i+1];b[i+1]=t;//???????????????
            }
        for(i=0,j=0;i<n;i++)
        {   j=j+1;
            if (a[i]!=b[i]) break;
        }
        if (j>=n) printf("YES");
        else printf("NO");
    }
    else printf("NO");
    return 0;
}