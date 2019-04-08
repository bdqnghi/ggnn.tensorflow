int main()
{
	int i,n,a,b;
	double c;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	c=1.000000000*b/a;
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if((1.000000000*b/a-c)>0.05){printf("better\n");}
		else if((1.000000000*b/a-c)<-0.05){printf("worse\n");}
		else if((1.000000000*b/a-c)>-0.05&&(1.000000000*b/a-c)<0.05){printf("same\n");}
	}
	return 0;
}
		