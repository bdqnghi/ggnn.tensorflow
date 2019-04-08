
void main()
{
	int n,i,k[100],l[26]={0},m=0,v,j;
	char c[100][26];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&k[i],c[i]);
		for(j=0;j<strlen(c[i]);j++)
		{
			l[(int)c[i][j]-65]+=1;
		}
	}
	for(i=0;i<26;i++)
	{
		if(l[i]>m)
			m=l[i];
	}
	for(i=0;i<26;i++)
	{
		if(l[i]==m)
		{
	        printf("%c\n%d\n",i+65,l[i]);
			break;
		}
	}
	for(v=0;v<n;v++)
	{
		for(j=0;j<strlen(c[v]);j++)
		{
			if(c[v][j]==i+65)
				printf("%d\n",k[v]);
		}
	}
}