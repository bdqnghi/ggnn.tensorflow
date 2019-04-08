void main()
{
	int n,i,j,l,len;
	char c[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",c[i]);
	for(i=0;i<n;i++)
	{
		l=0;
		len=strlen(c[i]);
		if(c[i][0]>='a' && c[i][0]<='z')
			l=l;
		else if(c[i][0]>='A' && c[i][0]<='Z')
			l=l;
		else if(c[i][0]=='_')
			l=l;
		else
			l++;
		for(j=1;j<len;j++)
		{
			if(c[i][j]>='a' && c[i][j]<='z')
				l=l;
			else if(c[i][j]>='A' && c[i][j]<='Z')
				l=l;
			else if(c[i][j]=='_')
				l=l;
			else if(c[i][j]>='0' && c[i][j]<='9')
				l=l;
			else l++;
		}
		if(l!=0)
			printf("no\n");
		else printf("yes\n");
	}
}

