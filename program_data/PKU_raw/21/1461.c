struct prin
{
	double b;
	int a,flag;
};
int main()
{
	double n,ar=0;
	struct prin p[10000];
	int i,j;
	double k;
	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i].a);
	}
	for(i=0;i<n;i++)
	{
		ar=ar+p[i].a/n;
	}
	for(i=0;i<n;i++)
	{
		p[i].b=(double)fabs(p[i].a-ar);
		p[i].flag=0;
	}
	k=p[0].b;
	for(i=0;i<n;i++)
	{
		if(p[i].b>k)
			k=p[i].b;
	}
	for(i=0;i<n;i++)
	{
		if(p[i].b==k)
		{
			p[i].flag=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(p[i].flag==1){
			printf("%d",p[i].a);
			break;
		}
	}
	for(j=i+1;j<n;j++)
	{
		if(p[j].flag==1)
			printf(",%d",p[j].a);
	}
	return 0;
}

	