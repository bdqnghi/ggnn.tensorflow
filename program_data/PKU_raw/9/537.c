int main()
{
    int n;
    scanf("%d",&n);
    char a[n][100];
    int b[n],i,j,c[n],d[n],k;
    for(i=0;i<n;i++)
    scanf("%s%d",a[i],&b[i]);
    for(i=0;i<n;i++)
    {
        c[i]=0;
        d[i]=n;
        for(j=0;j<n;j++)
        {
                  if(b[j]>=60&&b[j]>c[i])
                  {
                       for(k=0;k<i;k++)
                       {
                           if(j==d[k])
                           break;
                       }
                       if(k==i)
                       {
                           c[i]=b[j];
                           d[i]=j;
                       }
                  }
        }
        if(d[i]!=n&&b[d[i]]>=60)
        printf("%s\n",a[d[i]]);
    }
    for(i=0;i<n;i++)
    {
         if(b[i]<60)
         printf("%s\n",a[i]);
    }
    getchar();
    getchar();
}
             