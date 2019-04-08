int main()
{
	char b[205][100];
	int i,n,j=0,k=0,s=0,t=0,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",b[i]);
	}
	max=strlen(b[0]);
	min=strlen(b[0]);
	for (i=1;i<n;i++)
	{
		if (strlen(b[i])>max)
		{
			max=strlen(b[i]);
			s=i;
		}
		if (strlen(b[i])<min)
		{
			min=strlen(b[i]);
			t=i;
		}
	}
	printf("%s\n%s\n",b[s],b[t]);
	return 0;
}

