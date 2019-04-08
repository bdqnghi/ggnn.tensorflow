main()
{
  int k,i,j,a[25]={0},h,b[25]={0},max=0;
  scanf("%d",&k);
  for(i=0;i<k;i++) {scanf("%d",&a[i]);}
  b[k-1]=1;
  for(i=k-2;i>=0;i--)
  {
    for(j=i+1;j<=k-1;j++)
    {
       if(a[j]<=a[i]){if(b[j]+1>max) max=b[j]+1;}
    }
    if(max==0) max=1;
    b[i]=max;
    max=0;
  }
  for(i=0;i<=k-1;i++)
  {
     if(b[i]>max) max=b[i];
  }
  printf("%d",max);
  getchar();
  getchar();
}
