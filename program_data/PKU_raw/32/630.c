void main()
{
	char c[100][105];
	int i,j,j1,j2,n,len1,len2;
	scanf("%d",&n);
    for(i=0;i<2*n;i=i+2)
	{
		scanf("%s%s",c[i],c[i+1]);
	}
	for(i=0;i<2*n;i=i+2)
	{
		len1=strlen(c[i]),len2=strlen(c[i+1]);
		for(j1=len1-1,j2=len2-1;j2>=0;j1--,j2--)
		{
			if(c[i][j1]>=c[i+1][j2])
				c[i][j1]=c[i][j1]-c[i+1][j2]+48;
			else 
			{
				c[i][j1]=c[i][j1]+58-c[i+1][j2];
				c[i][j1-1]=c[i][j1-1]-1;
			}
		}
		for(j=0;j<len1;j++)
		    printf("%c",c[i][j]);
		printf("\n");
	}
}