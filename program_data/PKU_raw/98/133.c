void main()
{
	int n,i,t=0;
	char a[1000][50];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		t=t+strlen(a[i])+1;
		if(t<81&&(t+strlen(a[i+1])+1)<=81)
		{
			printf("%s ",a[i]);
		}
		else if(t<81&&(t+strlen(a[i+1])+1)>81)
		{
			printf("%s",a[i]);
		}
		else if(t==81)
		{
			printf("%s\n",a[i]);
			t=0;
		}
		else if(t>81)
		{
			printf("\n");
			t=0;
			i=i-1;
		}
	}
	printf("%s\n",a[n-1]);
}
