int a[1000],b[1000],ans[1000],a1[1000],n,p;
void change()
{    
     int i;
     for (i=0;i<n-p;i++)
       a[i+p]=a1[i];
     for (i=0;i<p;i++)
       a[i]=a1[n-i-1];
}
int calc()
{ int s,i,j;
  s=0;
  for (i=0;i<n;i++)
  if (a[i]>b[i]) s=s+200;
  else if (a[i]<b[i]) s=s-200;
  return(s);
}
void make(int a[1000])
{
     int i,j,k,p;
     for (i=0;i<n-1;i++)
     { p=i;
       for (j=i+1;j<n;j++)
       if (a[j]>a[p]) p=j;
       k=a[i]; a[i]=a[p]; a[p]=k;
     }
}
main()
{
      
      int i,j,k,max;
      scanf("%d",&n);
      while (n!=0)
      {
            for (i=0;i<n;i++)
            scanf("%d",&a[i]);
            for (i=0;i<n;i++)
            scanf("%d",&b[i]);
            make(a); make(b);
            for (i=0;i<n;i++)
            a1[i]=a[i];
            p=1;
            while (p<n)
            {ans[p]=calc();
             change();
             p++;
             }
            max=-200000;
            for (i=1;i<n;i++)
            if (ans[i]>max) max=ans[i];
            printf("%d\n",max);
            scanf("%d",&n);
      }
}