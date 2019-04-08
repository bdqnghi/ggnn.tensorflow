int main(int argc, char* argv[])
{
	char str[100][100],a[100];
	int n,i,l,j;
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		gets(str[i]);
	}
	for(i=0;i<n+1;i++)
	{
		l=strlen(str[i]);
		if(str[i][l-2]=='e'&&str[i][l-1]=='r')
		{
			for(j=0;j<l-2;j++)
			{
				a[j]=str[i][j];
			}
			a[j]='\0';
			puts(a);
		}
		if(str[i][l-2]=='l'&&str[i][l-1]=='y')
		{
			for(j=0;j<l-2;j++)
			{
				a[j]=str[i][j];
			}
            a[j]='\0'; 
			puts(a);
		}
		if(str[i][l-3]=='i'&&str[i][l-2]=='n'&&str[i][l-1]=='g')
		{
			for(j=0;j<l-3;j++)
			{
				a[j]=str[i][j];
			}
            a[j]='\0';
			puts(a);
		}
	}
	return 0;
}