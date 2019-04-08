int main()
{
	int n,i;
	float a,b,c,d,x,y;
	scanf("%d %f %f",&n,&a,&b);
	x=b/a;
	for(i=1;i<n;i++)
	{
		scanf("%f %f",&c,&d);
		y=d/c;
		if(y-x>0.05)
			printf("better\n");
		else
		{
			if(x-y>0.05)
				printf("worse\n");
			else
				printf("same\n");
		}
	}
	return 0;
}