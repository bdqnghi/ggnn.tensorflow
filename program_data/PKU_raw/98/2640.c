int main()
{
	int n,i,m=0;
	char word[41];
	scanf("%d",&n);
	scanf("%s",word);
	for(i=0;i<n;i++)
	{
		if(m==0)
		{
			printf("%s",word);
			m=m+strlen(word);
			scanf("%s",word);
		}
		else
		{
			if(m+strlen(word)+1>80)
			{
				printf("\n");
				m=0;
				i--;
			}
			else
			{
				printf(" %s",word);
				m=m+strlen(word)+1;
				scanf("%s",word);
			}
		}
	}
	return 0;
}

