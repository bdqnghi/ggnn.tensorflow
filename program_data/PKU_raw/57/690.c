void main()
{
	int n,c,i;
	char a[50][50];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		c=strlen(a[i]);
		if (a[i][c-1]=='r')
			a[i][c-2]='\0';
		else if(a[i][c-1]=='y')
			a[i][c-2]='\0';
		else a[i][c-3]='\0';
		printf("%s\n",a[i]);
	}


}