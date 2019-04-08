int main()
{
    int a[110]={0},i,j,n,l1,l2,e,b[110]={0};
    char s[110],s1[110];
    scanf("%d\n",&n);
    for (i=1;i<=n;i++)
    {
      gets(s);l1=strlen(s);
      gets(s1);l2=strlen(s1);
      for (j=l1;j>0;j--)
        a[l1-j+1]=s[j-1]-48;
      for (j=l2;j>0;j--)
        b[l2-j+1]=s1[j-1]-48;
      e=0;
      for (j=1;j<=l1;j++)
      {
       a[j]=a[j]-e;
       if (a[j]<b[j]) e=1;else e=0;
       b[j]=a[j]+e*10-b[j];
        }
       while (b[l1]==0&&l1>0) l1=l1-1;
       for (j=l1;j>0;j--) {printf("%d",b[j]);b[j]=0;}
       printf("\n");
       if (i<n)scanf("\n");
}
  }
