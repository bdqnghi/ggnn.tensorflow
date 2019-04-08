int main ()
{
	int n,i,j,e,m=0;
	int a[501];
	scanf ("%d\n",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if (a[j]>a[j+1])
			{
				e=a[j+1];
				a[j+1]=a[j];
				a[j]=e;
			}
		}
	}
	for (j=0;j<n;j++)
	{
		if (a[j]%2!=0)
		{
		 if (m==0)
		 {
			 printf ("%d",a[j]);
		 }
		 else 
		 {
			 printf (",%d",a[j]);
		 }
		 m++;
		}
	}
			
	
	
	return 0;
}
