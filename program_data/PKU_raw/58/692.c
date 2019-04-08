void main()
{
	char zf[10000][81];
	char num[10];
	int n;
	int i,j;
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++)
	{
		gets(zf[i]);
		if((zf[i][0]<'A'||(zf[i][0]>'Z'&&zf[i][0]<'a')||zf[i][0]>'z')&&zf[i][0]!='_')
			printf("0\n");
		else
		{
			for(j=0;zf[i][j]!='\0';j++)
			{
				if((zf[i][j]<'A'||(zf[i][j]>'Z'&&zf[i][j]<'a')||zf[i][j]>'z')&&(zf[i][j]!='_')&&(zf[i][j]>'9'||zf[i][j]<'0'))
				{
					printf("0\n");
					break;
				}
				if(zf[i][j+1]=='\0')
				{
					printf("1\n");
					break;
				}
			}
		}
	}
}
				
