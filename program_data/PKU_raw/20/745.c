void main()
{
	int n,i=0,j,l[100],m[100]={0};
	char str[100][13],substr[100][13];
	while(scanf("%s%s",substr[i],str[i])!=EOF)
		i++;
	n=i;
	for(i=0;i<n;i++)
	{
		l[i]=strlen(substr[i]);
		for(j=1;j<l[i];j++)
			if(substr[i][j]>substr[i][m[i]])
				m[i]=j;
		for(j=l[i]-1;j>m[i];j--)
			substr[i][j+3]=substr[i][j];
		substr[i][m[i]+1]=str[i][0];
		substr[i][m[i]+2]=str[i][1];
		substr[i][m[i]+3]=str[i][2];
		printf("%s\n",substr[i]);
	}
}