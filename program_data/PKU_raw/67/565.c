int main()
{
	int n,i;
	float a,b,e,f;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	e=b/a;
	for(i=1;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		f=b/a;
		if((f-e)>0.05)
			printf("better\n");
		else if((e-f)>0.05)
			printf("worse\n");
		else
			printf("same\n");
	}	
	return 0;
}
