int main()
{
	int n;
	int i,j,l;char a[500][1000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		l=strlen(a[i]);
		if(a[i][0]=='_'||(a[i][0]<='z'&&a[i][0]>='a')||(a[i][0]<='Z'&&a[i][0]>='A'))
		{
			for(j=0;j<l;j++)
			{
				if((a[i][j]<='z'&&a[i][j]>='a')||(a[i][j]<='Z'&&a[i][j]>='A')||(a[i][j]<='9'&&a[i][j]>='0')||a[i][j]=='_') 
					continue;
				else 
				{ 
					printf("0\n");
					break;}
			}
			if(j==l) printf("1\n");
		}
		else
			printf("0\n");
	}
	return 0;
}


