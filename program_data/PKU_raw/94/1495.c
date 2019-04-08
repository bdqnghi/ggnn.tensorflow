int main()
{
	int n,i,j,k;
	int a[500];
	int b[500];
	int t;
	int count=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			b[i]=0;
	}
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
k=0;
 for (i=0;i<n;i++)
 {
	 if(a[i]%2!=0)
	 {
		 b[k]=a[i];
		 k++;
		 count++;
	 }
 }
 for (k=0;k<count;k++)
 {
	 if (k==0)
	 {
		 printf("%d",b[k]);
	 }
	 else
	 printf("%c%d",',',b[k]);
 }
	

return 0;
}