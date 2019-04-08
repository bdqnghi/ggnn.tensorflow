void main()
{
	int i,n,a=0,b=0,c=0,d=0,e=0,max=0,k=0,sum=0;
	struct student
	{
		char name[20];
		int qm;
		int bj;
		char gb;
		char xb;
		int lw;
		int money;
	}stu[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qm,&stu[i].bj,&stu[i].gb,&stu[i].xb,&stu[i].lw);
	}
	
	for(i=0;i<n;i++)
	{
		if(stu[i].qm>80&&stu[i].lw>0)
			a=8000;
		if(stu[i].qm>85&&stu[i].bj>80)
			b=4000;
		if(stu[i].qm>90)
			c=2000;
		if(stu[i].qm>85&&stu[i].xb=='Y')
			d=1000;
		if(stu[i].bj>80&&stu[i].gb=='Y')
			e=850;
		stu[i].money=a+b+c+d+e;
		a=b=c=d=e=0;
	}
	max=stu[0].money;
	for(i=0;i<n;i++)
	{
		if(stu[i].money>max)
		{	max=stu[i].money;
		      k=i;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+stu[i].money;
	}
	printf("%s\n",stu[k].name);
	printf("%d\n",stu[k].money);
	printf("%d",sum);
}

