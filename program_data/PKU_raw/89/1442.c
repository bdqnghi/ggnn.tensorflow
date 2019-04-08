struct person
{
	int kn;
	int bkn;
};
main()
{
	int n,a,b,i,s=0;
	struct person *p;
	scanf("%d",&n);
	p=(struct person *)malloc(n*sizeof(struct person));
	for (i=0;i<n;i++)
	{
		p[i].kn=0;
		p[i].bkn=0;
	}
	while (1)
	{
		scanf("%d %d",&a,&b);
		if (a==0 && b==0)
			break;
		p[a].kn++;
		p[b].bkn++;
	}
	for (i=0;i<n;i++)
	{
	    if (p[i].kn==0 && p[i].bkn==n-1)
	        {
			printf("%d\n",i);
			s++;
            }
	}
	if(s==0) printf("NOT FOUND");
	free(p);
}

