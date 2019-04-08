void main()
{
	int x,y;int a[500],b[500],c[500];
	int i,j,t=0;int jishuqi1=0,jishuqi2=0;
	scanf("%d%d",&x,&y);
	a[0]=x;b[0]=y;
	for(i=0;i<=488;i++)
	{
		if(a[i]>1)
		{a[i+1]=a[i]/2;
		jishuqi1=jishuqi1+1;}
		else if(a[i]<=1)
			break;
	}
	for(j=0;j<=488;j++)
	{
		if(b[j]>1)
		{b[j+1]=b[j]/2;
		jishuqi2=jishuqi2+1;}
		else if(b[j]<=1)
			break;
	}
	for(i=0;i<=jishuqi1;i++)
		for(j=0;j<=jishuqi2;j++)
		{
			if(a[i]==b[j])
			{
				c[t]=a[i];
			    t=t+1;
			}
			else if(a[i]!=b[j])
			continue;
		}
		printf("%d\n",c[0]);
}