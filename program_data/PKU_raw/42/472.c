main()
{
  int n,a[100001],k,i,j,num=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {  
    if(a[i]==k)
     {
      num++;
      for(j=i;j<n;j++)
      a[j]=a[j+1];
     }
     if(a[i]==k)
     i--;
  }
  printf("%d",a[0]);
  for(i=1;i<(n-num);i++)
   printf(" %d",a[i]);
}