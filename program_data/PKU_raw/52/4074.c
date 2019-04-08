void main()
{
  int a[200];
  int m,n,i;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
     //?????
    for(i=n-1+m;i>=m;i--)
		a[i]=a[i-m];
	for(i=0;i<m;i++)
		a[i]=a[n+i];
      printf("%d",a[0]);
	  for(i=1;i<n;i++)
		  printf(" %d",a[i]);
	  printf("\n");


}