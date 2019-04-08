int main()
{
	int n,a[100][2],i,k=0,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0;i<n;i++)
	{
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
			k++;
		else
		{
			t=k>t?k:t;
		    k=0;
		}
	}
	t=k>t?k:t;
	printf("%d\n",t);
	return 0;
}

