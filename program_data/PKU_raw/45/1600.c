int main()
{
	char word1[50],word2[50];
	scanf("%s",word1);
	scanf("%s",word2);
	int n,m;
	n=strlen(word1);
	m=strlen(word2);
	int i,j,loc=0;
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(word2[i+j]!=word1[j])
				break;
		}
		if(j==n)
			loc=i+1;
		if(loc!=0)
			break;
	}
	printf("%d",loc-1);
	return 0;
}
