struct student
{
	char name[20];
	int mark;
	int re;
	char work;
	char west;
	int paper;
	int sum;
}stu[100];
void main()
{
	int n,i,sum=0,max=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %s %s %d",&stu[i].name,&stu[i].mark,&stu[i].re,&stu[i].work,&stu[i].west,&stu[i].paper);
		stu[i].sum=0;
		if(stu[i].mark>80&&stu[i].paper>0)
			stu[i].sum+=8000;
		if(stu[i].mark>85&&stu[i].re>80)
			stu[i].sum+=4000;
		if(stu[i].mark>90)
			stu[i].sum+=2000;
		if(stu[i].mark>85&&stu[i].west=='Y')
			stu[i].sum+=1000;
		if(stu[i].re>80&&stu[i].work=='Y')
			stu[i].sum+=850;
        sum=sum+stu[i].sum;
	}
	for(i=0;i<n;i++)
	    if(max<stu[i].sum)
		{
			max=stu[i].sum;
			l=i;
		}
	printf("%s\n%d\n%d\n",stu[l].name,max,sum);
}

