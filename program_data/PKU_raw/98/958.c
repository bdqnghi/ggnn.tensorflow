
int main()
{
	char s[100];
	int n;
	cin>>n;
	int t=0;
	for (int i=0;i<n;i++)
	{
		cin>>s;
		if (t==0)
		{
			printf("%s",s);
			t+=strlen(s);
		}
		else
		{
			t+=strlen(s)+1;
			if (t<=80)
			{
				printf(" %s",s);
			}
			else
			{
				printf("\n%s",s);
				t=strlen(s);
			}
		}
	}
	
	return 0;
}