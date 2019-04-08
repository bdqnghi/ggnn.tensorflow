void main()
{
	int a,b,c;
	struct student
	{
		char xing[20];
		int qi;
		int ban;
		char gan;
		char xi;
		int lun;
		int qian;
	}stu[100],mid;
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		stu[b].qian=0;
		scanf("%s%d%d %c %c%d",stu[b].xing,&stu[b].qi,&stu[b].ban,&stu[b].gan,&stu[b].xi,&stu[b].lun);
		if(stu[b].qi>80&&stu[b].lun>=1)
			stu[b].qian=stu[b].qian+8000;
		if(stu[b].qi>85&&stu[b].ban>80)
			stu[b].qian=stu[b].qian+4000;
		if(stu[b].qi>90)
			stu[b].qian=stu[b].qian+2000;
		if(stu[b].qi>85&&stu[b].xi=='Y')
			stu[b].qian=stu[b].qian+1000;
		if(stu[b].ban>80&&stu[b].gan=='Y')
			stu[b].qian=stu[b].qian+850;
	}
	for(b=0;b<a-1;b++)
	{
		for(c=0;c<a-b-1;c++)
		{
			if(stu[c].qian<stu[c+1].qian)
			{
				mid=stu[c];
				stu[c]=stu[c+1];
				stu[c+1]=mid;
			}
		}
	}
	c=0;
	for(b=0;b<a;b++)
		c=c+stu[b].qian;
	printf("%s\n%d\n%d",stu[0].xing,stu[0].qian,c);
}

