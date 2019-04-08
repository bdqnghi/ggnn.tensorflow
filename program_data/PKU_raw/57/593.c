int main()
{
	char a[52][35];
	int i,j,n;

	for(i=0;i<52;i++)
		for(j=0;j<35;j++)
			a[i][j]='\0';

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		j=strlen(a[i])-1;
		if(a[i][j]=='r')
		{
			if(a[i][j-1]=='e')
				a[i][j-1]='\0';
		}
		else if(a[i][j]=='y')
		{
			if(a[i][j-1]=='l')
				a[i][j-1]='\0';
		}
		else if(a[i][j]=='g')
		{	
			if(a[i][j-1]=='n')
				if(a[i][j-2]=='i')
					a[i][j-2]='\0';
		}
		else continue;
	}
	for(i=0;i<n;i++)
	{
		puts(a[i]);
	}
	
	return 0;
}