
main()
{
  char s[500],t[5],g[500][5]={0},c;
  int a[500]={0};
  int n,i,j,max=0;
  scanf("%d",&n);
  getchar();
  gets(s);
  for(i=0;s[i+n-1];i++)
  {
    for(j=0;j<n;j++)
      t[j]=s[i+j];
    for(j=0;g[j][0];j++)
      if(!strcmp(t,g[j]))
      {
        a[j]++;
        if(a[j]>max) max=a[j];
        break;
      }
    if(!g[j][0])
    {
      strcpy(g[j],t);
      a[j]++;
      if(a[j]>max) max=a[j];
    }
  }
  if(max==1) printf("NO");
  else
  {
    printf("%d\n",max);
    for(j=0;g[j][0];j++)
      if(a[j]==max) puts(g[j]);
  }
}