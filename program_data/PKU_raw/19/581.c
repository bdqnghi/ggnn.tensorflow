void main()
{
	char str1[100][100]={{0,0}},str2[100],str3[100],str4[100];
	int n,i=0,j=0,k[100]={0},m=0;
	gets(str2);
	scanf("\n");
	gets(str3);
	scanf("\n");
	gets(str4);
	n=strlen(str2);
	m=strlen(str4);
	for(i=0;i<n;i++)
	{
		if(str2[i]==' ')
		{
			j=j+1;
			k[j]=0;
		}
		else
		{
			str1[j][k[j]]=str2[i];
			k[j]=k[j]+1;
		}
	}
	for(i=0;i<=j;i++)
	{
		if(strcmp(str1[i],str3)==0)
		{
			if(k[i]<m)
			{memset(str1[i],0,m);
			strcpy(str1[i],str4);
			}
			else
			{
				memset(str1[i],0,k[i]);
				strcpy(str1[i],str4);
			}
		}
	}
	
		printf("%s",str1[0]);
		for(i=1;i<=j;i++)
			printf(" %s",str1[i]);
}
