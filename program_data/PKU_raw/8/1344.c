int compare(const void * elem1, const void * elem2)
{
      return (*(int *)elem1) - (*(int *) elem2);
}
int main()
{
      int N,M,i;
      scanf("%d%d",&N,&M);
      int a[N],b[M];
      for(i=0;i<N;i++)
      {
              scanf("%d",&a[i]);
      }
      for(i=0;i<M;i++)
      {
              scanf("%d",&b[i]);
      }
       qsort(a,N,sizeof(int),compare);
       for(i=0;i<N-1;i++)
       {
              printf("%d ",a[i]);
             
       }  
       printf("%d ",a[i]);
        qsort(b,M,sizeof(int),compare);
       for(i=0;i<M-1;i++)
       {
              printf("%d ",b[i]);
             
       }  
       printf("%d\n",b[i]);
       
       return 0;
}
