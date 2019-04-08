int main(int argc, char* argv[])
{
	int i,n;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		int j,m;
		char s[100];
		scanf("%s",s);
		m=strlen(s);
		if(s[m-1]=='r'||s[m-1]=='y')
		{
		for(j=0;j<m-2;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
		}
		else
        {
		for(j=0;j<m-3;j++)
		{
			printf("%c",s[j]);
		}
        printf("\n");
		}
	}
	return 0;
}

