int main()
{
	char s[100];
	int chars[20]={0}, loci[20]={0}, i, j=0/*chars?????????*/, max, maxi, min, mini, preword=0, word=0;
	gets(s);
	for(i=0;i<=strlen(s);i++)
	{	
		if (preword)
		{
			if(isalpha(s[i]))
				{
					word=1;
					chars[j]++;
					preword=1;
				}
			else {word=0;preword=0;j++;}
		}
		else
		{
			if (isalpha(s[i]))
			{
				word=1;
				chars[j]++;
				loci[j]=i;
				preword=1;
			}
			else {word=0;preword=0;}
		}
	}
	max=chars[0];
	maxi=0;
	for(i=0;i<j;i++)
	{
		
		if(max<chars[i])
		{
			max=chars[i];
			maxi=i;
		}
	}
	min=chars[0];
	mini=0;
	for(i=0;i<j;i++)
	{
		
		if(min>chars[i])
		{
			min=chars[i];
			mini=i;
		}
	}
	for(i=loci[maxi];i<loci[maxi]+max;i++)	
		printf("%c",s[i]);
	printf("\n");
	for(i=loci[mini];i<loci[mini]+min;i++)	
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
