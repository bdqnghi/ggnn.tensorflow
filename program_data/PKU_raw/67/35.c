int main()
{
	int n,i,jiu1,jiu2,xin1[100],xin2[100],xiao[100];;
	scanf("%d",&n);
	scanf("%d %d",&jiu1,&jiu2);
	xiao[0]=100*jiu2/jiu1;
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&xin1[i],&xin2[i]);
		xiao[i]=100*xin2[i]/xin1[i];
		if(xiao[i]-xiao[0]>=5)
			printf("better\n");
		else if(xiao[0]-xiao[i]>=5)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}