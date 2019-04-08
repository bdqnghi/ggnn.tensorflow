int max_value(int a[],int n)
{
	int i,k=0;
	for(i=0;i<n;i++)
	if(a[i]>a[k]) k=i;
	return a[k];
}
void main()
{
	int a[300]={0},i,k=0,max,n=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		n++;
		c=getchar();
		if(c=='\n') break;
	}
	max=max_value(a,n);
	for(i=0;i<n;i++)
	{
		if(a[i]!=max) break;
	}
	k=i;
	if(k==n) printf("No\n");
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==max) continue;
			if(a[i]>a[k]) k=i;
		}
		printf("%d\n",a[k]);
	}
}