void main()
{
	int n,i,a[400];
	scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
	int sum=0;
	for(i=0;i<n;i++) sum=sum+a[i];
	int dis[400];
	for(i=0;i<n;i++)
	{if(n*a[i]>=sum) dis[i]=n*a[i]-sum;
	else dis[i]=sum-n*a[i];
	}
	int max=0;
	for(i=0;i<n;i++)
		if(dis[i]>=max) max=dis[i];
	int num=0,ans[10];
	for(i=0;i<n;i++)
		if(dis[i]==max) 
		{ans[num]=a[i];
		 num=num+1;
		}
    if(num==1)printf("%d",ans[0]);
	if(num==2) 
	{if(ans[1]>ans[0]) printf("%d,%d",ans[0],ans[1]);
	 else printf("%d,%d",ans[1],ans[0]);
	}
}