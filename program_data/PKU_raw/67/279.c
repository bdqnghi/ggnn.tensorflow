int main()
{
	int n, i;
	float k, p, q;
	scanf("%d%f%f",&n, &p, &q);
	k=q/p;
	for(i=0;i<n-1;i++)
	{
		float a, b;
		scanf("%f%f",&a, &b);
		if(b/a-k>0.05) printf("better\n");
		else if(k-b/a>0.05) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}