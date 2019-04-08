void main()
{
	int a,j,i;
	scanf("%d",&a);
	char **pp,**qq;
	int m,n;
	pp = (char **)malloc(a*sizeof(char*));
	qq = (char **)malloc(a*sizeof(char*));
	for(i=0;i<a;i++)
	{
		pp[i]=(char*)malloc(101*sizeof(char));
		qq[i]=(char*)malloc(101*sizeof(char));
		scanf("%s",pp[i]);
		scanf("%s",qq[i]);
	}
	for(i=0;i<a;i++)
	{
		m = strlen(pp[i]);
		n = strlen(qq[i]);
		for(j=m-1;j>=m-n;j--)
		{
			if(pp[i][j]<qq[i][n-m+j])
			{
				pp[i][j] = 10 + pp[i][j] - qq[i][n-m+j] + '0';
				pp[i][j-1]--;
			}
			else if(pp[i][j]>=qq[i][n-m+j])
				pp[i][j] = pp[i][j] - qq[i][n-m+j] + '0';
		}
		for(j=m-1;j>=0;j--)
			if(pp[i][j]<'0')
			{
				pp[i][j] += 10;
				pp[i][j-1] -= 1;
			}
		printf("%s\n",pp[i]);
	}
}