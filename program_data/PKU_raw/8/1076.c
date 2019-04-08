int n,m;
int *pfCompare(const void *a, const void *b)
{
   return *(int*)a-*(int*)b;
}
int shuru(int x,int y)
{
int k;
scanf("%d",&x);
scanf("%d",&y);
int*p=(int*)malloc(x*sizeof(int));
for(k=0;k<=x-1;k++)
scanf("%d",&p[k]);
int*q=(int*)malloc(y*sizeof(int));
for(k=0;k<=y-1;k++)
scanf("%d",&q[k]);
qsort(p,x,sizeof(int),pfCompare);
qsort(q,y,sizeof(int),pfCompare);
int*c=(int*)malloc((x+y)*sizeof(int));
  for (k=0;k<=x-1;k++)
  c[k]=p[k];
  for (k=0;k<=y-1;k++)
  c[x+k]=q[k];
  for(k=0;k<=x+y-2;k++)
  printf("%d ",c[k]);
  printf("%d",c[x+y-1]);
}

main()
{      
shuru(n,m);
}