int main()
{
	int n, i, j, lenth[50];
	char word[50][35];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{scanf("%s",word[i]);}
	
	for(i=0;i<n;i++)
	{lenth[i]=strlen(word[i]);
		
	if(word[i][lenth[i]-1]=='g')
	{
	for(j=0;j<lenth[i]-3;j++)
	{printf("%c",word[i][j]);}
	printf("\n");
	}
	
	else if(word[i][lenth[i]-1]=='y')
		{
		for(j=0;j<lenth[i]-2;j++)
		{printf("%c",word[i][j]);}
		printf("\n");
		}
	else if("%c",word[i][lenth[i]-1]=='r')
		{
		for(j=0;j<lenth[i]-2;j++)
		{printf("%c",word[i][j]);}
		printf("\n");
		}
	}
	
		return 0;
	}