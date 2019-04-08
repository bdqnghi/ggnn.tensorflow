int main()
{ int n,i,k;
  int a[20000];
  scanf("%d\n",&n);
  for (i=0;i<=(n-1);i++)
  scanf("%d",&a[i]);
  for (i=(n-1);i>=0;i--)
     { for (k=i-1;k>=0;k--)
       if ((a[i]-a[k])==0) {a[i]=0;break;}
      } 
  if (a[0]>9) printf("%d",a[0]);
   for (i=1;i<=(n-1);i++)
  {if (a[i]>9)
   printf(" %d",a[i]);
   } 
   }