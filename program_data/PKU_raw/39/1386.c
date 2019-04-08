struct person 
{
	char n[20];
	int q;
	int p;
	char g;
	char x;
	int lun;
};
int jiang(struct person a)
{
	int j=0;
	if(a.q>80&&a.lun>0)
	{
		j=j+8000;
	}
	if (a.q>85&&a.p>80)
	{
		j=j+4000;
	}
	if(a.q>90)
	{
		j=j+2000;
	}
	if (a.q>85&&a.x=='Y')
	{
		j=j+1000;
	}
	if(a.p>80&&a.g=='Y')
	{
		j=j+850;
	}
	return(j);
}
void main()
{
	int n,i,j,r;
	double sum=0;
	int a[100];
	struct person p[100];
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%s %d %d %c %c %d",p[i].n,&p[i].q,&p[i].p,&p[i].g,&p[i].x,&p[i].lun);
		a[i]=jiang(p[i]);
		sum=sum+a[i];
	}
	for (i=0;i<=n-1;i++)
	{
		r=0;
		for (j=0;j<=n-1;j++)
		{
			if (a[j]>a[i])
			{
				r=1;
			}
		}
		if (r==0)
		{
			printf("%s\n%d\n%.0lf",p[i].n,a[i],sum);
			break;
		}
	}
}