

main()
{
  int i,k,n,c,d;
  int a[10000];
  int b[10000];
  k=0;
  scanf("%d",&n);
for(i=0;i<n;i++)
{   a[i]=1;b[i]=0;
}
  for(;;)
{  scanf("%d %d",&c,&d);
   if(c==0&&d==0) break;
     a[c]=0;  b[d]=b[d]+1;
     }
  
   for(i=0;i<n;i++)
   if(a[i]==1&&b[i]==n-1)
  {     k=1;
      printf("%d",i);
  } 
   if(k==0)
   printf("NOT FOUND");
    getchar();
   getchar();
      }
