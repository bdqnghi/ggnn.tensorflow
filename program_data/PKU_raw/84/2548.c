int main()
{   
    int a[150];
	int m,n,i,j,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	for(i=n;i>0;i--)
	  for(j=1;j<i;j++)
	  {
		  m=i;
		  if(a[j]<a[i])
			  m=j;
		  temp=a[i];
		  a[i]=a[m];
		  a[m]=temp;
	  }	
	printf("%d\n",a[1]);
	printf("%d",a[2]);
	return 0;
}