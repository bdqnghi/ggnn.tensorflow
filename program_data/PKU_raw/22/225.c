void main()
{
	int n[300]={0},i,max=0,len,maxn,t=0;
	char c;
	for(i=0;;i++)
	{
		scanf("%d",&n[i]);
		if((c=getchar())=='\n')
		break;
	}
	len=i;
	if(len==0)
		printf("No\n");
	else
	{
		for(i=1;i<=len;i++)
				if(n[0]!=n[i])
					t=1;
		if(t==0)
			printf("No\n");
		else
		{
			for(i=0;i<=len;i++)
				if(max<n[i])
					{max=n[i];maxn=i;}
			for(i=0;i<=len;i++)
				if(i!=maxn)
					if(n[maxn]==n[i])
						n[i]=0;
			n[maxn]=0;
			max=0;
			for(i=0;i<=len;i++)
				if(max<n[i])
					{max=n[i];maxn=i;}
			printf("%d\n",n[maxn]);
		}
	}
}