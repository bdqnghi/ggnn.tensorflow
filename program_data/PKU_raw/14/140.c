struct student
{
	long a;
	int x;
	int y;
};
struct student stu[100000];
main()
{
	long n,i,j,p;
	int m;
	scanf("%ld",&n);
	int g[100000];
	for(i=0;i<n;i++)
	{
		scanf("%ld %d %d",&stu[i].a,&stu[i].x,&stu[i].y);
		g[i]=stu[i].x+stu[i].y;
	}
	for(i=1;i<4;i++)
		for(j=n-1;j>=i;j--)
			if(g[j-1]<g[j])
			{
				m=g[j-1];g[j-1]=g[j];g[j]=m;
				p=stu[j-1].a;stu[j-1].a=stu[j].a;stu[j].a=p;
			}
	for(i=0;i<3;i++)
		printf("%ld %d\n",stu[i].a,g[i]);
}
