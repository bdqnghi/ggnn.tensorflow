void main()
{
	int n,i,j,z,len;
	char c[1000][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",c[i]);
	for(i=0;i<n;i++)
	{
		z=0;
		if((c[i][0]<'A')||(c[i][0]>'Z'&&c[i][0]<'_')||(c[i][0]==96)||(c[i][0]>'z'))
		{
			printf("no\n");
			continue;
		}
		len=strlen(c[i]);
		for(j=1;j<len;j++)
		{
			if((c[i][j]<'0')||(c[i][j]>'9'&&c[i][j]<'A')||(c[i][j]>'Z'&&c[i][j]<'_')||(c[i][j]==96)||(c[i][j]>'z'))
			{
				printf("no\n");
				z=1;
				break;
			}
		}
		if(z!=1)
        printf("yes\n");
	}
}
