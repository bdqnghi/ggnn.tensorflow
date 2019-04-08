void del(int a[],int n)
{
	int s[300];
	int i,j,b,k=0;
	for (i=0;i<n;i++)
	{
		b=1;
		for (j=0;j<k;j++)
			if (a[i]==s[j]) b=0;
		if (b) 
		{
			s[k]=a[i];
			k++;
		}
	}
	printf("%d",s[0]);
	for (j=1;j<k;j++)
		printf(",%d",s[j]);
}
void main()
{
	int a[300];
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	del(a,n);
}