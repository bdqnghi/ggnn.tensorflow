int main()
{
	int i,n,zong,hao;
	double x0,x;

	scanf(" %d",&n);
	scanf(" %d %d",&zong,&hao);
	x0=hao/(zong*1.0);

	for(i=0;i<n-1;i++)
	{
		scanf(" %d %d",&zong,&hao);
		x=hao/(zong*1.0);
		if(x-x0>0.05) printf("better\n");
		else if(x0-x>0.05) printf("worse\n");
		else printf("same\n");
	}
	
	return 0;
}