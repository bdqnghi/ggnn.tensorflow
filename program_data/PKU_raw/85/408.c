void main()
{
	int n,i,j;
	char word[100][30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for(i=0;i<n;i++)
	{
		int flag=1;
		for(j=0;j<strlen(word[i]);j++)
		{
			if(((word[i][0]<='Z'&&word[i][0]>='A')||(word[i][0]<='z'&&word[i][0]>='a')||word[i][0]=='_')!=1)
			{
				flag=0;
			break;
			}
			else if(((word[i][j]<='Z'&&word[i][j]>='A')||(word[i][j]<='z'&&word[i][j]>='a')||word[i][j]=='_'||(word[i][j]>='0'&&word[i][j]<='9'))!=1&&word[i][j]!='\0')
			{
				flag=0;
			break;
			}			
		}
		if(flag==1)
			printf("yes\n");
		else
		printf("no\n");
	}
}