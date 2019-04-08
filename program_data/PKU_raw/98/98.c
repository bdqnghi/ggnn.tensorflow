
int main()
{
	int n,i,l,L=0;
	char word[25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		l=strlen(word);
		L+=(l+1);
		if(i==0)
			printf("%s",word);
		else
		{
			if(L>81)
				L=l+1;
			if(L!=(l+1))
				printf(" %s",word);
			else
				printf("\n%s",word);
		}
	}
	return 0;
}
