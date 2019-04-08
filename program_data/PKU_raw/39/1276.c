int main()
{
	struct student
	{
		char nam[50];
		int ave;
		int ping;
		char gan;
		char xi;
		int wen;
		int total[5];
		
		int all;
	}stu[100];
	int num,i,j;
	int a[100]={0};
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s%d%d %c %c%d",stu[i].nam,&stu[i].ave,&stu[i].ping,&stu[i].gan,&stu[i].xi,&stu[i].wen);
stu[i].all = 0;
memset(stu[i].total, 0, sizeof(stu[i].total));
	}
    for(i=0;i<num;i++)
	{

		if(stu[i].ave>80&&stu[i].wen>=1)
			stu[i].total[0]=8000;
                if(stu[i].ave>85&&stu[i].ping>80)
			stu[i].total[1]=4000;

		if(stu[i].ave>90)
			stu[i].total[2]=2000;
		if(stu[i].ave>85&&stu[i].xi=='Y')
                        stu[i].total[3]=1000;
		if(stu[i].ping>80&&stu[i].gan=='Y')
		        stu[i].total[4]=850;
	}
    for(i=0;i<num;i++)
	{
		for(j=0;j<5;j++)
		{
			stu[i].all+=stu[i].total[j];  //????????????.
		}
	}
    
	int max=0;
	for(i=0;i<num;i++)
	{
		if(stu[i].all>max)
		{
			max=stu[i].all;//????????,????????
		    j=i;
		}
	}
	int whole=0;
	for(i=0;i<num;i++)
	{
		whole+=stu[i].all;
	}
	printf("%s\n%d\n%d",stu[j].nam,max,whole);
	
	return 0;
}