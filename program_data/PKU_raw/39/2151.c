int main()
{
	int n,a[100],b[100],c[100],i,ans[100],temp,sum,jxj,m,e;
	char p[100],q[100],d[100][20];
	scanf("%d",&n);
	sum=0;
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %d %d%c%c%c%c %d",d[i],&a[i],&b[i],&e,&p[i],&m,&q[i],&c[i]);
		ans[i]=0;
		if(a[i]>80&&c[i]>=1)ans[i]=ans[i]+8000;
		if(a[i]>85&&b[i]>80)ans[i]=ans[i]+4000;
		if(a[i]>90)ans[i]=ans[i]+2000;
		if(a[i]>85&&q[i]=='Y')ans[i]=ans[i]+1000;
		if(b[i]>80&&p[i]=='Y')ans[i]=ans[i]+850;
	}
    jxj=0;
	for(i=0;i<=n-1;i++)
	{
		if(ans[i]>jxj)
		{
			jxj=ans[i];
		    temp=i;
		}
	}
	for(i=0;i<n;i++)sum=sum+ans[i];
	printf("%s\n",d[temp]);
	printf("%d\n",jxj);
	printf("%d",sum);
	return 0;
}