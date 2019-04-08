void main()
{
	int n,i,j,sum=0,count=0,temp,m=0;
	int s[301],res[301]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	for(i=0;i<n;i++)m=max(m,abs(s[i]*n-sum));
	for(i=0;i<n;i++)if(abs(s[i]*n-sum)==m)res[count++]=i;
	for(i=0;i<count;i++)
	{
		for(j=0;j<count-1;j++)
		{
			if(s[res[j]]>s[res[j+1]])
			{
				temp=res[j];
				res[j]=res[j+1];
				res[j+1]=temp;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		printf("%d",s[res[i]]);
		if(i<count-1)printf(",");
	}
	putchar(10);
}