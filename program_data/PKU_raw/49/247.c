
int main()
{
	char word[SIZE];
	int i,j,k,count,length;
	gets(word);
	length=strlen(word);
	for(i=2;i<=length;i++)
	{
		for(j=0;j<length-i+1;j++)
		{
			count=0;
			for(k=0;k<i;k++)
			{
				if(word[j+k]==word[j+i-1-k])
				{
					count++;
				}
			}
			if(count==i)
			{
				for(k=0;k<i;k++)
				{
					printf("%c",word[j+k]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
