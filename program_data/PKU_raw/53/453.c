int main()
{
	int n;
	int s[300];
	int i;
	int j,k;
	scanf("%d", &n);
	for (i=0,j=0;i<n;i++)
	{
		scanf("%d",&s[j]);
		for (k=0;k<j;k++)
		{
			if (s[k]==s[j]) j--;
		}
		j++;
	}
	for (i=0;i<j;i++)
	{
		printf("%d",s[i]);
		if (i!=j-1) printf(",");
	}
	return 0;
}