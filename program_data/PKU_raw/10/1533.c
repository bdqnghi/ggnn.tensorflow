
void sort(int *a,int i,int n) /*sort??a[i]?a[n]??????*/
{
  int j,k,t;
  for(j=i;j<n;j++)
  {
    for(k=j+1;k<=n;k++)
    {
      if(a[j]<=a[k])
      {t=a[j];a[j]=a[k];a[k]=t;}
    }
  }
}


main()
{
  int i,j,k,n;
  scanf("%d",&n);
  int *a=(int *)malloc(n*sizeof(int));
  int *jishu=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);jishu[i]=1;}
 
  for(i=n-2;i>=0;i--)
  {
    for(j=i+1;j<=(n-1);j++)
    {
      if(a[j]<=a[i]&&jishu[j]>=jishu[i])
      {
        jishu[i]=jishu[j]+1;
      }
    }
  }
  sort(jishu,0,n-1);
  printf("%d\n",jishu[0]);
  free (a);free (jishu);
  
}