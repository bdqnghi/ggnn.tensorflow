int main()
{
	char line[150];char girl;
	gets(line);
	 int len=strlen(line);
	char boy=line[0];
	for(int i=0;i<len;i++)
	{
		if(line[i]!=boy){
			girl=line[i];break;
		}
	}
	for(int i=0;i<len;i++)
	{
		if(line[i]==girl)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(line[j]==boy)
				{
					printf("%d %d\n",j,i);
					line[j]=' ';break;
				}
			}
		}
	}
	getchar();
	getchar();
	return 0;
}
	
