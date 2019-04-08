int main()
{
  int n;
  scanf("%d",&n);
  int*p;
  p=(int*)malloc((n*n)*sizeof(int));
  int*y;
  y=(int*)malloc((n*n)*sizeof(int));
  int i,j;
  for(i=0;i<n*n;i++)
  {
  scanf("%d %d",&p[i],&y[i]);
  if(p[i]==0&&y[i]==0)
  break;
  }
  p[i]=-100000;
  y[i]=-100000;
  int  k;
  k=i;
  int*d;
  d=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  d[i]=0;
  for(i=0;i<n;i++)
  { 
   for(j=0;j<k;j++)
   {
    if(p[j]==i)
    break;
    if(y[j]==i)
    d[i]++;
   }
   if(d[i]==n-1)
   {
   printf("%d",i);  
   break;
   }         
  }
  if(i==n)
  printf("NOT FOUND");
  
  free(p);
  free(y);
  free(d);                             
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  getchar();
  
  
}
