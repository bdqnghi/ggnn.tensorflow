int main()
{
	int x,b,c,n,i,j,k;
	char a[1000][30];
	char w[100];
	gets(w);
	n=atoi(w);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{
		x=1;
		if((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||a[i][0]=='_')
		{
			1;
		}
		else
		{
			x=0;
		}
			for(j=0;a[i][j]!='\0';j++)
			{
				if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||a[i][j]=='_'||(a[i][j]>='0'&&a[i][j]<='9'))
				{
					1;
				}
				else
				{
					x=0;
				}
			}
			if(x==1)
				printf("yes\n");
			else
					printf("no\n");
		}

	return 0;
}