struct 
{
	char name[20];
	int qimo;
	int banji;
	char gb;
	char xb;
	int paper;
}stu[101];

void main()
{
	int N, i, max=0, p=0, total=0, sch[101]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].qimo,&stu[i].banji,&stu[i].gb,&stu[i].xb,&stu[i].paper);
	for(i=0;i<N;i++)
	{  
		if(stu[i].qimo>80&&stu[i].paper>0)
			sch[i]+=8000;
		if(stu[i].qimo>85&&stu[i].banji>80)
			sch[i]+=4000;
		if(stu[i].qimo>90)
			sch[i]+=2000;
		if(stu[i].qimo>85&&stu[i].xb=='Y')
			sch[i]+=1000;
		if(stu[i].banji>80&&stu[i].gb=='Y')
			sch[i]+=850;
	}
	max=0;
	for(i=0;i<N;i++)
	{
		if(sch[i]>max)
		{
			max=sch[i];
			p=i;
		}
		total=total+sch[i];
	}
	printf("%s\n%d\n%d\n",stu[p].name,sch[p],total);
}
