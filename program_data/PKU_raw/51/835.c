int main()
{
	char s[500]={""},s1[500][6]={""};
	int n,x[500]={0},i,j,length,max;
	scanf("%d",&n);
	getchar();
	gets(s);
	length=strlen(s);
	for(i=0;i<=length-n;i++)
	{
		for(j=0;j<n;j++)
		{
			s1[i][j]=s[i+j];
		}
	}
	for(i=0;i<=length-n;i++)
	{
		for(j=i+1;j<=length-n;j++)
		{
			if(strcmp(s1[i],s1[j])==0)
				x[i]=x[i]+1;
		}
	}
	max=x[0];
	for(i=0;i<=length-n;i++)
	{
		if(x[i]>max)
			max=x[i];
	}
	if(max==0)
		printf("NO");
	else
	{printf("%d\n",max+1);
	for(i=0;i<=length-n;i++)
	{
		if(x[i]==max)
			printf("%s\n",s1[i]);
	}}
	return 0;
}