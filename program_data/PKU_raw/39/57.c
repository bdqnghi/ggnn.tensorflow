int main()
{
	struct student
	{
		char name[20];
		int qim,piny,lunw;
		char ganb,xib;
		int sum;
	};
	int i,n,a;
	scanf("%d",&n);
	struct student *stu=(struct student *)malloc(sizeof(struct student)*n);//////
//	struct studen *stu[90];
	int max=0,sum=0;
	for(i=0;i<n;i++)
	{
		stu[i].sum=0;
		scanf("%s%d%d %c %c %d",stu[i].name,&stu[i].qim,&stu[i].piny,&stu[i].ganb,&stu[i].xib,&stu[i].lunw);
		if(stu[i].qim>80 && stu[i].lunw>=1)stu[i].sum+=8000;
		if(stu[i].qim>85 && stu[i].piny>80)stu[i].sum+=4000;
		if(stu[i].qim>90)stu[i].sum+=2000;
		if(stu[i].qim>85 && stu[i].xib=='Y')stu[i].sum+=1000;
		if(stu[i].piny>80 && stu[i].ganb=='Y')stu[i].sum+=850;
		if(stu[i].sum>max)
		{
			max=stu[i].sum;
			a=i;
		}
		sum+=stu[i].sum;
	}
	printf("%s\n%d\n%d\n",stu[a].name,stu[a].sum,sum);
	return 0;
}