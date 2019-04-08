
int main()
{
	char word[2][50];
	int i,j,len[2],result=1,wzy=0;


	scanf("%s%s",word[0],word[1]);
	len[0]=strlen(word[0]);
	len[1]=strlen(word[1]);


	for(i=0;i<=len[1]-len[0];i++)
	{
		if(word[1][i]==word[0][0])
		{
			for(j=i+1;j<i+len[0];j++)
			{
				if(word[1][j]!=word[0][j-i])
				{
					result=0;
					break;
				}
			}
			if(result)
			{
				printf("%d",i);
				wzy=1;
			}
			result=1;
		}
		if(wzy==1)
		{
			break;
		}
	}

	return 0;
}