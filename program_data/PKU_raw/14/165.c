void main()
{
	struct student
	{
	
	 int id;
	 int chi;
	 int mat;
	 int sum;
	}stu[100000],t;
	int i,j,n,student_num;
	scanf("%d",&student_num);
	n=student_num;
	for(i=0;i<n;i++)
		scanf("%d%d%d",&stu[i].id,&stu[i].chi,&stu[i].mat);
	for(i=0;i<n;i++)
		stu[i].sum=stu[i].chi+stu[i].mat;
	for(i=0;i<n;i++)
		if(stu[0].sum<stu[i].sum)
			{t=stu[0];stu[0]=stu[i];stu[i]=t;}
		for(i=1;i<n;i++)
		if(stu[1].sum<stu[i].sum)
			{t=stu[1];stu[1]=stu[i];stu[i]=t;}
		for(i=2;i<n;i++)
		if(stu[2].sum<stu[i].sum)
			{t=stu[2];stu[2]=stu[i];stu[i]=t;}
	for(i=0;i<3;i++)
		printf("%d %d\n",stu[i].id,stu[i].sum);
}

