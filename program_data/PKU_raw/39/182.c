void main()
{
	struct student 
	{
		char s[20];
		 int m1;
		 int m2;
		char c1;
		char c2;
		int n;
		int t;
	}stu[100],tr;

	int i,j,m,t1=0;

	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%s%d%d %c %c%d",stu[i].s,&stu[i].m1,&stu[i].m2,&stu[i].c1,&stu[i].c2,&stu[i].n);stu[i].t=0;
        if(stu[i].m1>80&&stu[i].n>0)
			stu[i].t+=8000;
		if(stu[i].m1>85&&stu[i].m2>80)
			stu[i].t+=4000;
		if(stu[i].m1>90)
			stu[i].t+=2000;
		if(stu[i].m2>80&&stu[i].c1=='Y')
			stu[i].t+=850;
		if(stu[i].m1>85&&stu[i].c2=='Y')
			stu[i].t+=1000;
	}
	for(i=0;i<m-1;i++)
	{
		for(j=i+1;j<m;j++)
		if(stu[i].t<stu[j].t)
		{
			tr=stu[i];
			stu[i]=stu[j];
			stu[j]=tr;
		}
		}

	for(i=0;i<m;i++)
{
      t1+=stu[i].t;
}
	printf("%s\n%d\n%d\n",stu[0].s,stu[0].t,t1);
}


	
