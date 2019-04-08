void main()
{
	int N,i,sum[100],total=0,order;
	struct{
		char name[20];
		int results;
		int dis;
		char iscadre;
		char iswest;
		int paper;
	}stu[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].results,&stu[i].dis,&stu[i].iscadre,&stu[i].iswest,&stu[i].paper);
		sum[i]=0;
		if(stu[i].results>80&&stu[i].paper>0)
			sum[i]+=8000;
		if(stu[i].results>85&&stu[i].dis>80)
			sum[i]+=4000;
	    if(stu[i].results>90)
			sum[i]+=2000;
		if(stu[i].results>85&&stu[i].iswest=='Y')
			sum[i]+=1000;
		if(stu[i].dis>80&&stu[i].iscadre=='Y')
			sum[i]+=850;
		else sum[i]+=0;
		total+=sum[i];
	}
	order=0;
	for(i=0;i<N;i++)
	{
		if(sum[i]>sum[0])
		{
			order=i;
			sum[0]=sum[i];
		}
	}
	printf("%s\n",stu[order].name);
	printf("%d\n",sum[0]);
	printf("%d\n",total);
}