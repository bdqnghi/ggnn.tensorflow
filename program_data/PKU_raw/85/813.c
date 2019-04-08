void main()
{
	char c[20];
	int n,i,j,m;
	scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++)
	{
		gets(c);
		m=0;
		if(c[0]<65||(c[0]>90&&c[0]<95)||c[0]==96||c[0]>122)
			printf("no\n");
		else
		{
			for(i=1;c[i]!='\0';i++)
			{
				if(c[i]<48||(c[i]>57&&c[i]<65)||(c[i]>90&&c[i]<95)||c[i]==96||c[i]>122)
					m=m+1;
			}
			if(m==0)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
}
