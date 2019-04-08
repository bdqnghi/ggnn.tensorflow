void main()
{
	char c1[11],c2[4];char ans[20];
	while(scanf("%s%s",c1,c2)!=EOF)
	{
		char ans[20]={0};
	int i,max,max_num,n,j,m;
    max=0;n=strlen(c1);
	for(i=0;i<=n;i++)
	{
		if(c1[i]>max)
		{
			max=c1[i];
			max_num=i;
		}
	}
	for(i=0;i<=max_num;i++)
		ans[i]=c1[i];
	strcat(ans,c2);
	n=strlen(c1);
	m=strlen(ans);j=0;
	for(i=max_num+1;i<=n;i++)
	{	
	    ans[m+j]=c1[i];j++;
	}
	printf("%s\n",ans);
	}
}