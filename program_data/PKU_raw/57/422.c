int main()
{
	char a[50][50];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='e'&&a[i][j+1]=='r'&&a[i][j+2]=='\0')
			{
				a[i][j]='\0';
				break;
			}
			else if(a[i][j]=='l'&&a[i][j+1]=='y'&&a[i][j+2]=='\0')
			{
				a[i][j]='\0';
				break;
			}
			else if(a[i][j]=='i'&&a[i][j+1]=='n'&&a[i][j+2]=='g'&&a[i][j+3]=='\0')
			{
				a[i][j]='\0';
				break;
			}
		}
	}
	for(i=0;i<n;i++)
		puts(a[i]);
	return 0;
}
				

