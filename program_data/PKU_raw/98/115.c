void main()
{
	int n, i, t[1000]={0}, k=0;
	char word[1000][40]={""};

	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", word[i]);
		t[i] = strlen(word[i]);
	}

	for(i=0; i<n-1; i++)
	{
		k = k+t[i]+1;
		if(k-1<=80 && k+t[i+1]<=80)
			printf("%s ", word[i]);
		else if(k-1<=80)
			printf("%s\n", word[i]);
		else
		{
			k = t[i]+1;
			printf("%s ", word[i]);
		}
	}
	printf("%s", word[n-1]);
}