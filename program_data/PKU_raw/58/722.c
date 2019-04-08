int main()
{
	int m;
	int i,j;
	char a[81]={'\0'};
	gets(a);
	m=atoi(a);
	for(i=0;i<=m-1;i++)
	{
		char a[81]={'\0'};
		int answer=1;
		gets(a);
		if(a[0]>=65&&a[0]<=90||a[0]>=97&&a[0]<=122||a[0]=='_')
		{
			for(j=1;a[j]!='\0';j++)
			{
				if(!(a[j]>=65&&a[j]<=90||a[j]>=97&&a[j]<=122||a[j]=='_'||a[j]>=48&&a[j]<=57))
				{
					answer=0;
					break;
				}
			}
		}
		else
		{
			answer=0;
		}
		printf("%d\n",answer);
	}
	return 0;
}