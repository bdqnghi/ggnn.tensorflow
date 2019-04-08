main()
{
  int i,n,x,y,t=0;
  int a[10000],b[10000];
  scanf("%d",&n);
  while(scanf("%d %d",&x,&y)==2)
  {
    if(x==0&&y==0)
      break;
    else
      a[x]++;
      b[y]++;
      }
  for(i=0;i<n;i++)
  {
    if (a[i]==0&&b[i]==n-1)
      printf("%d",i);
      t++;
      }
  if(t==0)
    printf("NOT FOUND");
  getchar();
  getchar();
  getchar();
  return 0;
}