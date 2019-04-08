int main()
{
    int N;
    scanf("%d",&N);
    int *h=(int*)malloc((N+1)*sizeof(int));
    for(int i=1;i<=N;i++)
        scanf("%d",&h[i]);
    int *f=(int*)malloc((N+1)*sizeof(int)); 
    f[1]=1;
    for(int i=2;i<=N;i++)
       {
       int tem=0;
       for(int j=1;j<i;j++)
           {
           if(h[j]>=h[i])
              {
              if(f[j]>tem)
                 tem=f[j];           
              }    
           }     
       f[i]=tem+1;
       }
    int max=-1;
    for(int i=1;i<=N;i++)
       {
       if(f[i]>max)
          max=f[i];
       }
    printf("%d",max);
}
