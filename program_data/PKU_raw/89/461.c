int main()
{
    int i,n,m;
    scanf("%d",&n);
    int a[100000][2],b[100000]={0};
    for(i=0;i<100000;i++)
    {
      scanf("%d %d",&a[i][0],&a[i][1]);
      if(a[i][0]==0&&a[i][1]==0)
      break;
      else
      {
        b[a[i][1]]++;  
      }             
    }
    for(i=0;i<n;i++)
    {
      if(b[i]==n-1)
      {
       printf("%d",i);
       break;
      }              
    }
    if(i==n)
    printf("NOT FOUND");
    getchar();
    getchar();
}
