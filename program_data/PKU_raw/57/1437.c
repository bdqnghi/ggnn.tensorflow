
int main(int argc, char* argv[])
{
	int n,i,j,a;
	char s[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		a=strlen(s[i]);
		if((s[i][a-2]=='e'&&s[i][a-1]=='r')||(s[i][a-2]=='l'&&s[i][a-1]=='y'))
		{
			for(j=0;j<a-2;j++)
				printf("%c",s[i][j]);
			printf("\n");
		}
		else if((s[i][a-3]=='i'&&s[i][a-2]=='n'&&s[i][a-1]=='g'))
		{
			for(j=0;j<a-3;j++)
				printf("%c",s[i][j]);
			printf("\n");
		}
		else
			printf("%s\n",s[i]);
	}

	return 0;
}

