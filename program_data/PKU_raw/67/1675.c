int main()
{
	int n,i,j,k,a,b,x,y;
	double l,z;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	l=1.0*y/x;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		z=1.0*b/a;
		if(z>l&&z-l>=0.05)
		{
			printf("better\n");
		}
		else if(z<l&&l-z>=0.05)
		{
			printf("worse\n");
		}
		else{printf("same\n");}

	}
	return 0;

}