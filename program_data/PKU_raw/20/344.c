int main()
{
	char str[11][13],substr[11][3];
	int l[11],i,j,n=0,max[11];
	while(scanf("%s %s",str[n],substr[n])!=EOF)n++;
	for(i=0;i<n;i++)l[i]=strlen(str[i]);
	for(i=0;i<n;i++)
	{
		max[i]=0;
		for(j=1;j<l[i];j++)
		{
			if(str[i][j]>str[i][max[i]])max[i]=j;
			else max[i]=max[i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=l[i]-1;j>=max[i]+1;j--)
		{
			str[i][j+3]=str[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		str[i][max[i]+1]=substr[i][0];
		str[i][max[i]+2]=substr[i][1];
		str[i][max[i]+3]=substr[i][2];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<l[i]+2;j++)printf("%c",str[i][j]);
		printf("%c\n",str[i][l[i]+2]);
	}
}