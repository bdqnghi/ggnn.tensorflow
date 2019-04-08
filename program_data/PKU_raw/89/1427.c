main()
{
  int n,m=0,i,j;
  scanf("%d",&n);
  int *a=(int *)malloc(n*sizeof(int));
  int *b=(int *)malloc(n*sizeof(int));
  int *c=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    a[i]=i;
    b[i]=0;
    c[i]=0;
  }
  int p[100000][2];
  for(i=0;;i++)
  {
    scanf("%d %d",&p[i][0],&p[i][1]);
    if((p[i][0]==0)&&(p[i][1]==0))
      break;
  }
  int k=i;
  for(i=0;i<k;i++)
  {
      for(j=0;j<n;j++)
      {
        if (p[i][1]==a[j])
          b[j]++;
      }
  }
  for(i=0;i<k;i++)
  {
      for(j=0;j<n;j++)
      {
        if (p[i][0]==a[j])
          c[j]++;
      }
  }
  for(j=0;j<n;j++)
  {
      if((b[j]==n-1)&&(c[j]==0))
      {
        printf("%d\n",j);
        m=1;
      }
  } 
  if(m==0)
    printf("NOT FOUND\n");
    free(a);
    free(b);
    free(c);
  getchar();
  getchar(); 
}
