
int main(int argc, char* argv[])
{
	char s[10000];
	char a,b;
	int n;
	
	gets(s);
	n=strlen(s);
	a=s[0];
	b=s[n-1];
	int i;
	for(i=1;i<n;i++)
	{
		if(s[i]==b)
		{
			int j;
			int first=0;
			for(j=i-1;j>=0;j--)
			{
				if(s[j]==a&&first==0)
				{
					printf("%d %d\n",j,i);
						first=1;
						s[i]=' ';
						s[j]=' ';
				}
			}
		
		}
		
	}
	

	return 0;
}
