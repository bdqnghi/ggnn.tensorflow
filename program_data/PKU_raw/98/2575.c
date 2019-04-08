int main()
{
	int word_num,i,sum;
	char word[500][45];
	scanf("%d\n",&word_num);
	sum=0;
	for(i=0;i<word_num;i++)
	{
		scanf("%s",&word[i]);
	}
	for(i=0;i<word_num;i++)
	{
		if(sum==0)
		{
			printf("%s",word[i]);
			sum+=strlen(word[i]);
		}
		else
		{
			sum+=strlen(word[i])+1;
			if(sum<=80)
			{
				printf(" %s",word[i]);
			}
			else
			{
				sum=0;
				i--;
				printf("\n");
			}
		}
	}
	return 0;
}

		

