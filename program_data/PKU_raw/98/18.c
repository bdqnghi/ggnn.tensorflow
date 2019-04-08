int main()
{
	int i,n;
	int count=0,flag=0;
	char word[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		if(count+strlen(word)+1<=80)
		{
			if(flag==0)
			{
				printf("%s",word);
				flag=1;
				count+=strlen(word);
			}
			else
			{
				printf(" ");
				printf("%s",word);
				count+=strlen(word)+1;
			}
			
		}
		else
		{
			printf("\n");
			printf("%s",word);
			count=strlen(word);
		}
	}
	return 0;
}
