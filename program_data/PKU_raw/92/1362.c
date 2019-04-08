int main()
{
    int k,n,i,m,j,s[1000],q;
     for(k=0;;k++)
    {
    scanf("%d",&n);
    if(n==0)
     break;
    q=n;
    m=0;
    int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
     {scanf("%d",&a[i]);
     c[i]=0;
     d[i]=0;}
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
    for(i=0;i<n;i++)
     {int t=a[0],r=0;
      for(j=0;j<n-i;j++)
       if(a[j]>t)
          {t=a[j];
           r=j;}
      a[r]=a[n-i-1];
      a[n-i-1]=t;
      }
    for(i=0;i<n;i++)
     {int t=b[0],r=0;
      for(j=0;j<n-i;j++)
       if(b[j]<t)
          {t=b[j];
           r=j;}
      b[r]=b[n-i-1];
      b[n-i-1]=t;
      }
      for(i=0;i<n;i++)
       {for(j=0;j<n;j++)
         if(c[i]==0&&d[j]==0)
         {if(a[i]>b[j])
          {m++;
           c[i]=1;
           d[j]=1;}}}
      for(i=0;i<n;i++)
       {for(j=0;j<n;j++)
         if(c[i]==0&&d[j]==0)
         {if(a[i]==b[j])
           {q--;
            c[i]=1;
           d[j]=1;}}}
      s[k]=200*m-200*(q-m);
      }
      for(i=0;i<k;i++)
      printf("%d\n",s[i]);
      getchar();
      getchar();         
}     