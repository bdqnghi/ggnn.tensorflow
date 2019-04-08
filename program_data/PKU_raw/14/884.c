void main()
{
	struct student
	{
		int ID;
		int chinese;
		int math;
		int total;
	}stu1,stu2,stu3,temp;
	int i,n;
	stu1.total=0;
	stu2.total=0;
	stu3.total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&temp.ID,&temp.chinese,&temp.math);
		temp.total=temp.chinese+temp.math;
		if(temp.total>stu1.total)
		{
			stu3=stu2;
			stu2=stu1;
			stu1=temp;
		}
		else if(temp.total<=stu1.total&&temp.total>stu2.total)
		{
			stu3=stu2;
			stu2=temp;
		}
		else if(temp.total<=stu2.total&&temp.total>stu3.total)stu3=temp;
	}
	printf("%d %d\n",stu1.ID,stu1.total);
	printf("%d %d\n",stu2.ID,stu2.total);
	printf("%d %d\n",stu3.ID,stu3.total);
}