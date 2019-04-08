void main()
{
	char str[3][256],string[512];
	int n,m,k,i,j;
	scanf("%s %s %s",str[0],str[1],str[2]);
	n=strlen(str[0]);
	m=strlen(str[1]);
	k=strlen(str[2]);
	for(j=0;j<n-m+1;j++)
	{
	for(i=0;i<m;i++)
	{
		if(str[1][i]!=str[0][i+j])
			break;
	}
	if(i==m) 
	{
		break;
	}
	}
	if(j<n-m+1)
	{
	for(i=0;i<j;i++)
		string[i]=str[0][i];
	for(i=j;i<j+k;i++)
		string[i]=str[2][i-j];
	for(i=j+k;str[0][i-k+m]!='\0';i++)
		string[i]=str[0][i-k+m];
	string[i]='\0';
	printf("%s",string);
	}
	else
		printf("%s",str[0]);
}