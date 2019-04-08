
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char str[501];
	gets(str);
	int len,q[501];
	for(len=0;str[len]!=0;len++);
	int i,j,u,v,V,max=0;
	for(i=0;i<=len-n;i++)
	{
		q[i]=1;
		for(u=i+1;u<=len-n;u++)
		{
			V=1;
			for(v=0;v<n;v++)
			{
				if(str[i+v]!=str[u+v])
				{
					V=0;
					break;
				}
			}
			if(V==1)
			{
				q[i]=q[i]+1;
				if(q[i]>max)
					max=q[i];
			}
		}
	}
	if(max==0)
	{
		printf("NO\n");
		return 0;
	}
	printf("%d\n",max);
	for(i=0;i<len-n;i++)
	{
		if(q[i]==max)
		{
			for(j=0;j<n;j++)
			{
				printf("%c",str[i+j]);
			}
			putchar('\n');
		}
	}
	return 0;
}