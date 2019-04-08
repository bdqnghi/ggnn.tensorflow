int main()
{
	int a[100],b[100];
	int m,n,j,k;
	void f(int a[],int m);
	scanf("%d%d",&m,&n);
	for(j=0;j<m;j++)
	{
		scanf("%d",&a[j]);
	}
	for(k=0;k<n;k++)
	{
		scanf("%d",&b[k]);
	}
	f(a,m);
	printf(" ");
	f(b,n);
	return 0;
}
void f(int a[],int m)
{
	int i,l,s;
	for(i=1;i<m;i++)
	{
		for(l=0;l<m-i;l++)
		{
		   	if(a[l]>a[l+1])
			{s=a[l]; a[l]=a[l+1]; a[l+1]=s;}
	     } 
	}
     
      printf("%d",a[0]);
	  for(l=1;l<m;l++)
	  {
		  printf(" %d",a[l]);
	  }
}
