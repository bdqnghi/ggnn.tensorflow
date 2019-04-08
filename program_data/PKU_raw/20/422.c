void main()
{
	int i,j=0,t,k,m,n;
	char temp;
	char str[20],str1[4],str2[20];
	scanf("%s%s",str,str1);
	do
	{
	m=strlen(str);
	n=strlen(str1);
	temp=str[0];
	for(i=0;i<m-1;i++)
	{
		if(temp<str[i+1])
		{
			temp=str[i+1];
			j=i+1;
		}
	}
	for(i=j+1,k=0;i<m;i++,k++)
	{
		str2[k]=str[i];
	}
	t=k;
	for(i=j+1,k=0;k<n;i++,k++)
	{
		str[i]=str1[k];
	}
	for(i=j+n+1,k=0;k<=t;i++,k++)
	{
		str[i]=str2[k];
	}
	for(i=0;i<m+n;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	}
	while(scanf("%s%s",str,str1)!=EOF);
}