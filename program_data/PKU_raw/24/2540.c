int main()
{
	int n, len[200];
	char c[200][200];
	int i;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s", c[i]);
		len[i]=strlen(c[i]);
	}
	int max=len[0], min=len[0];
	for(i=1;i<n;i++)
	{
		if(max<len[i])
			max=len[i];
		if(min>len[i])
			min=len[i];
	}
	if(max==min)
		printf("%s\n%s\n", c[0], c[0]);
	else
	{
		for(i=0;i<n;i++)
		{
			if(max==len[i])
			{
				printf("%s\n", c[i]);
				break;
			}
		}
		for(i=0;i<n;i++)
		{
			if(min==len[i])
			{
				printf("%s\n", c[i]);
				break;
			}
		}
	}
	return 0;
}

	


