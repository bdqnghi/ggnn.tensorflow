int main()
{
	int n,i;
	float c[100];
	struct A
	{
		float a;
		float b;
	}
	m[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&m[i].a);
		scanf("%f",&m[i].b);
		c[i]=m[i].b/m[i].a;
	}
	for(i=1;i<n;i++)
	{
		if(c[i]-c[0]>0.05)
			printf("better\n");
		else if(c[i]-c[0]<-0.05)
			printf("worse\n");
		else printf("same\n");
	}
	return 0;
}

