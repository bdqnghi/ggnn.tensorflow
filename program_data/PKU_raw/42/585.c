int main()
{  int n,i,*p,j,m,z;
   int k,a[100000];
   scanf("%d",&n);
   for (i=0;i<=(n-1);i++)
       scanf("%d",&a[i]);
   scanf("%d\n",&k);
   z=0;
   for (i=0;i<=(n-1);i++)
      {if ((a[i])==k) {z++;
                       for (j=(i+1);j<=(n-1);j++)  
                          {if (a[j]!=k) {m=a[i];a[i]=a[j];a[j]=m;z--;break;}
                             }
                         
       }}
  p=&a[0];
  printf("%d",*p);
  for (p=a+1;p<(a+n-z);p++)
     printf(" %d",*p);


 }