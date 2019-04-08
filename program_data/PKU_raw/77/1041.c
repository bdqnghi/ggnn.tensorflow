int main()
{
	char s[222];
	int i=1,j,k,len;
	gets(s);
	len=strlen(s);
	char a,b;
	a=s[0];
	b=s[len-1];
	for (i;i<=len-1;i++)
	{
		k=i;
		if (s[k]==b)
		{
			j=i;
			for (i=j-1;i>=0;i--)
			{	
				if(s[i]==a)
				{
					s[i]='0';s[j]='0';
					printf("%d %d\n",i,j);
					break;
				}
			}
		}
	}
}