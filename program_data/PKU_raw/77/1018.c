
int main()
{
	int i,j,n,k;
	char s[102];
	gets(s);
	for(i=1;s[i]!='\0';i++)
	{
		if(s[i]!=s[0])
		{
			for(j=i-1;j>=0;j--)
			{
				if(s[j]==s[0])
				{
					s[j]=s[i];
					printf("%d %d\n",j,i);
					break;
				}
			}
		}
		
	}

	return 0;
}

