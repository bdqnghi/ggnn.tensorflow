int main()
{
	int m,i,a[1000]={0},count[30]={0},temp,j,max=-999,flag;
	char s[1000][30]={0},cha;
	scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		scanf("%d", &a[i]);
		for(j=1;j<30;j++)
		{
			scanf("%c", &s[i][j]);
			if(s[i][j]==' ') 
			{
				s[i][j]=0;
				continue;
			}
			if(s[i][j]=='\n')
			{
				s[i][j]=0;
				break;
			}
			temp=s[i][j]-'A'+1;
			count[temp]+=1;
		}
	}
	for(i=1;i<=26;i++)
	{
		if(count[i]>=max)
		{
			flag=i;
			max=count[i];
		}
	}
	printf("%c\n%d\n", flag+64,max);
	cha='A'+flag-1;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<30;j++)
		{
			if(s[i][j]==cha)
			{
				printf("%d\n", a[i]);
			}
		}
	}
	return 0;
}




