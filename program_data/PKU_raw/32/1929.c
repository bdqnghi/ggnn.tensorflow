main()
{
	char s[500],t[500],result[10][500];
	int n,i,j,k,m=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(s);
		gets(t);
		k=strlen(s)-1;
		for(j=strlen(t)-1;j>=0;j--)
		{
			if(s[k]>=t[j]){

				s[k]=s[k]-t[j]+'0';
				k--;
			}
			else if(s[k]<t[j])
			{
				s[k-1]--;
				s[k]=s[k]+10-t[j]+'0';
				k--;
			}
		}
		strcpy(result[m++],s);
	if(i!=n-1)	scanf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;result[i][j]!='\0';j++)
		{
			if(result[i][j]!='0')
				break;
		}
		if(result[i][j]=='\0')
			printf("0");
		else
			for(k=j;result[i][k]!='\0';k++)
		{
			printf("%c",result[i][k]);
		}
		printf("\n");
	}
}