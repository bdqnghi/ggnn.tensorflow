int main()
{
	int i,j,m,k;
    char str[11],strsub[4];
	for(j=0;;j++)
	{
		k=0;
		if(scanf("%s%s",str,strsub)==EOF)break;
		m=strlen(str);
		for(i=0;i<m;i++)
		{
			if((str[k]-str[i])<0)
			{
				k=i;
			}
		}
		for(i=0;i<k+1;i++)
		{
			printf("%c",str[i]);
		}
		printf("%s",strsub);
		for(i=k+1;i<m;i++)
		{
			printf("%c",str[i]);
		}
		printf("\n");
	}
	
	return 0;
}