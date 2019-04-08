int main()
{
	int n,i;
	struct jiegou
	{
		int a;
		int b;
		float x;

	}
	sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sz[i].a,&sz[i].b);
		sz[i].x=(float)1.0*sz[i].b/sz[i].a*100.0;
	}
	for(i=1;i<n;i++)
	{
		if(sz[i].x-sz[0].x>5)
			printf("better\n");
		else if(sz[0].x-sz[i].x>5)
			printf("worse\n");
		else
			printf("same\n");
	}
	return 0;
}
