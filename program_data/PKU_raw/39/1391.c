
struct asd
{
	char str[21];
	int a;
	int b;
	int c;
	int sum;
	char x;
	char y;
}stu[100];

void main()
{
	int i,n,max,m,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d", stu[i].str, &stu[i].a, &stu[i].b, &stu[i].x, &stu[i].y, &stu[i].c);
		stu[i].sum=0;
	}

	for(i=0;i<n;i++)
	{
		if(stu[i].a>80 && stu[i].c>0)
			stu[i].sum+=8000;
		if(stu[i].a>85 && stu[i].b>80)
			stu[i].sum+=4000;
		if(stu[i].a>90)
			stu[i].sum+=2000;
		if(stu[i].a>85 && stu[i].y=='Y')
			stu[i].sum+=1000;
		if(stu[i].b>80 && stu[i].x=='Y')
			stu[i].sum+=850;
	}
	
	m=0;
	for(i=0;i<n;i++)
	{
		m+=stu[i].sum;
	}

	max=0;t=0;
	for(i=0;i<n;i++)
	{
		if(stu[i].sum>max)
		{max=stu[i].sum;t=i;}
	}

	printf("%s\n%d\n%d\n", stu[t].str, max, m);
}