
int main()
{
	int n;
	struct W{
		char word[100];
		int len;
	}w[520];
	int i,m,j;
	scanf("%d",&n);
	m=0;
	for (i=0;i<n;i++)
	{
		
		scanf("%s",w[i].word);
		w[i].len=0;
		for (j=0;w[i].word[j]!='\0';j++)
		{
			w[i].len++;
		}
	
	}
	for (i=0;i<n;i++)
	{
		m=m+w[i].len+1;
		if (i==n-1){
			if (m<=81)
				printf("%s",w[i].word);
			else {
				printf("\n");
				printf("%s",w[i].word);
			}
			}
	else if (m<80 && m+w[i+1].len<81)
		printf("%s ",w[i].word);
	else if (m>81)
		{
			printf("\n");
			printf("%s ",w[i].word);
			m=w[i].len+1;
		}
	else
	{
		printf("%s\n",w[i].word);
		m=0;
	}
	}
	return 0;
}

