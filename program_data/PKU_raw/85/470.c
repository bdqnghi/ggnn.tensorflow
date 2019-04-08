void main()
{
	char p[100][100]={"\0"};
	int i,j,flag,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",p[i]);
	for(i=0;i<n;i++,flag=1)
	{
		if(p[i][0]<='z'&&p[i][0]>='a'||p[i][0]<='Z'&&p[i][0]>='A'||p[i][0]=='_')
		{
		for(j=1;p[i][j]!='\0';j++)
			if(!(p[i][j]<='z'&&p[i][j]>='a'||p[i][j]<='Z'&&p[i][j]>='A'||p[i][j]=='_'||p[i][j]>='0'&&p[i][j]<='9'))
			{
				flag=0;
				break;
			}
		}
		else
			flag=0;
			if(flag)
				printf("yes\n");
			else
				printf("no\n");
	}
}
