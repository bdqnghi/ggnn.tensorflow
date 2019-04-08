void main()
{
	char s[501];
	int i,j,k,x;
	int count=0;
	int flag=0;
	gets(s);
	for (i=2;i<=strlen(s);i++)
	{
		for(j=0;(j+i)<=strlen(s);j++)
		{
			count=0;flag=0;
			for(k=0;k<(i/2);k++)
			{
				if (s[j+k]==s[j+i-k-1]) count++;
				
			}
			if(count==i/2)
			{
				for(k=0;k<i;k++)
				printf("%c",s[j+k]);
				printf("\n");
			}
		}
	}
}