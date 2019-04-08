
int f(int x)
{  return x%2; }

int cmp(const void*a,const void*b)
{  return *(int*)a-*(int*)b; }

main()
{
      int i,j=0,n,x;
      int *b;
      scanf("%d",&n);
      b=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      {
           scanf("%d",&x);
           if(f(x)){ b[j]=x;j++;}
      }
      qsort(b,j,sizeof(int),cmp);
      for(i=0;i<j-1;i++) printf("%d,",b[i]);
      printf("%d",b[i]);
 
}
