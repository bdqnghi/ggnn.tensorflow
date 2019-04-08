int main()
{
	int n,i;
	int count=0;
	char word[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		if (count==0)
			printf("%s",word);
		int j=0;
		while (word[j]!='\0')
		{
			j++;
		}
		count=count+j;
		if(count>j)
		{
		if(count<79)
		{
			count++;
			printf(" %s",word);
		}
		else if(count==79)
		{
			printf(" %s\n",word);
			count=0;
		}
		if(count>79)
		{
			printf("\n%s",word);
			count=j;
		}
		}
	}
	return 0;
}