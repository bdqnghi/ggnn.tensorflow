int main()
{
	int n;
	scanf("%d",&n);
	int p, q;
	scanf("%d %d",&p,&q);
	float e = (float)q/p;
	int i = 2;
	while(i<=n)
	{
		int x, y;
		scanf("%d %d",&x,&y);
	    float f = (float)y/x;
		if((f-e<=0.05)&&(f-e>=-0.05))
			printf("same\n");
		else if(f<e)
			printf("worse\n");
		else
			printf("better\n");
		i++;
	}
	return 0;
}