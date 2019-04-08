int main()
{
	int m,n,i=0,num=0,p=1,flag[301]={0};
	for(;;)
	{
		scanf("%d %d",&n,&m);
		if(m==0 && n==0)
			return 0;
		for(;;)
		{
			i++;
			if(p>n)
				p=1;
			if(flag[p]==1)
			{
				i--;
				p++;
				continue;
			}
			if(i==m)
			{
				flag[p]=1;
				i=0;
				num++;
			}
			p++;
			if(num==n-1)
			{
				for(i=1;i<=n;i++)
				{
					if(flag[i]==0)
					{
						printf("%d\n",i);
						break;
					}
				}
				break;
			}
		}
		num=0;
		for(i=0;i<301;i++)
			flag[i]=0;
		i=0;
		p=1;
	}
}