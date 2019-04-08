int main()
{
	char string[256],substring[256],replacement[256];
	int i,j,len1,len2,ex=0,a=0,shit=0;
	gets(string);
	gets(substring);
	gets(replacement);
	len1=strlen(string);
	len2=strlen(substring);
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(string[i+j]==substring[j])
			{
				ex++;
			}
			if(ex==len2 && shit==0)
			{
				shit=1;
				for(j=a;j<i;j++)
				{
					printf("%c",string[j]);
				}
				printf("%s",replacement);
				a=i+len2;

			}
		}
		ex=0;
	}
	for(j=a;j<len1;j++)
	{
		printf("%c",string[j]);
	}
	return 0;
}
	
