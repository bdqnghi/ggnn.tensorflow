int main(int argc, char* argv[])
{
	int n;
	int i,j,k;
	char s[1000];
	scanf ("%d",&n);
	for (i=2;i<=n+1;i++)
	{
		k=1;
		scanf ("%s",s);
		if(isalpha(s[0])||s[0]=='_')
		{
			for (j=1;s[j]!='\0';j++)
			{
				if (isalnum (s[j])||s[j]=='_')
				{
					k++;
				}
				
			}	
			if (k==j)
			{
				printf ("yes\n");
			}
			else 
			{
				printf("no\n");
			}
		}
		else
		{
			printf("no\n");
		}	
	}
	return 0;
}

