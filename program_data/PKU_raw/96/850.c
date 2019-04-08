int main()
{
	char sz[300]={'\0'}, result[300]={'\0'};
	int k,i,j,m;
	scanf("%s",sz);
	if(strlen(sz)==1)
	{
		j=sz[0]-48;
		printf("0\n%d",j);
	}
	else if(strlen(sz)==2)
	{
		j=(sz[0]-48)*10+(sz[1]-48);
		printf("%d\n%d",j/13,j%13);
	}
	else
	{
	k=sz[0]-48;
	for(j=k,i=1;i<strlen(sz);i++)
	{
		k=j*10+(sz[i]-48);
		for(m=0;m<=9;m++)
		{
			if(13*m<=k&&13*(m+1)>k)
			{
				result[i-1]=m+48;
				j=k-13*m;
				break;
			}
		}
	}
		if(result[0]!='0')
		{
			printf("%c",result[0]);
		}
		for(i=1;i<strlen(result)-1;i++)
		{
			printf("%c",result[i]);
		}
		printf("%c\n",result[strlen(result)-1]);
		printf("%d",j);
	}
		return 0;
}