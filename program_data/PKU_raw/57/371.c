int main()
{
	char a[50][32];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(a[i]);
		if(a[i][strlen(a[i])-1]=='r'&&a[i][strlen(a[i])-2]=='e'||a[i][strlen(a[i])-1]=='y'&&a[i][strlen(a[i])-2]=='l')
		{
			a[i][strlen(a[i])-1]=0;
			a[i][strlen(a[i])-1]=0;
		}
		else if(a[i][strlen(a[i])-1]=='g'&&a[i][strlen(a[i])-2]=='n'&&a[i][strlen(a[i])-3]=='i')
		{
			a[i][strlen(a[i])-1]=0;
			a[i][strlen(a[i])-1]=0;
			a[i][strlen(a[i])-1]=0;
		}
	}
	for(i=0;i<=n;i++)puts(a[i]);
	return 0;
}

