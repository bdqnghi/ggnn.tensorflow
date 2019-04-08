void main()
{
	char str1[100];int str2[100],n,i,j=0,k,m,x;
	gets(str1);
	n=strlen(str1);
	for(i=0;i<=n;i++)
	{
		if(str1[i]==' ')
		{
			str2[j]=i;j++;
		}
	}
	if(j!=0)
	{
	for(m=(str2[j-1]+1);m<n;m++)
	{
		printf("%c",str1[m]);
	}
	for(x=1;x<=j-1;x++)
	{
		for(m=str2[j-(x+1)];m<=(str2[j-x]-1);m++)
		{
			printf("%c",str1[m]);
		}

	}
	printf(" ");
	for(m=0;m<=(str2[0]-1);m++)
	{
		printf("%c",str1[m]);
	}
	}
	else puts(str1);

}