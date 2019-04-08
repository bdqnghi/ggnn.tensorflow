int main()
{
	char str[300]={0},str1[300]={0};
	int b[100]={0},c[100]={0};
	int i,m,n;
	int k=0;
	char j;
    scanf("%s",str);
	n=strlen(str);
	for(j=97;j<=122;j++)
	{
		m=j-97;
		for(b[m]=0,i=0;i<n;i++)
		{
			if(j==str[i])	b[m]++;
		}
	}
	for(j=97;j<=122;j++)
	{
		m=j-97;
		if(b[m]!=0)
		{k=j;break;}
	}
	if(k==0)	printf("No");
	else if(k!=0)	
	{
		for(j=97;j<=122;j++)
			{	
				m=j-97;
				if(j==k&&b[m]!=0)	printf("%c=%d",j,b[m]);
				else if(j>k&&b[m]!=0)	printf("\n%c=%d",j,b[m]);
			}
	}
	return 0;
}