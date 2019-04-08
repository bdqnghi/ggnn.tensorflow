int main()
{
	int n,i,j,k;
	int a[200];
	scanf("%d",&n);
	for(i=0;i<2*n;i=i+2)
		scanf("%d %d",&a[i],&a[i+1]);
	printf("\n");
	for(i=0,j=0,k=0;i<2*n;i=i+2)
	{
		if(a[i]>=90&&a[i]<=140&&a[i+1]>=60&&a[i+1]<=90)
			j=j+1;
		else
		{
			{if(j>k)
				k=j;}
			j=0;
		}
	}
	if(j>k)
		k=j;

	printf("%d\n",k);

	
	return 0;

}