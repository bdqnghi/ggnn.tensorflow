void main()
{
	int i,n;
	float std;
	float improve;
	int total,ok;
	scanf("%d",&n);
	scanf("%d%d",&total,&ok);
	std=(float)ok/(float)total;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&total,&ok);
		improve=(float)ok/(float)total;
		if(improve-std>0.05) printf("better\n");
		else if(std-improve>0.05) printf("worse\n");
		else printf("same\n");
	}
}

