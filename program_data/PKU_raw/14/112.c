void main()
{
	struct data
	{
		int number;
		int chinese;
		int math;
		int total;
	}student[100000],temp;
	
	long n,i,j;

	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&student[i].number,&student[i].chinese,&student[i].math);
		student[i].total=student[i].chinese+student[i].math;
	}

	for(i=0;i<3;i++)
		for(j=i+1;j<n;j++)
			if(student[i].total<student[j].total)
			{
				temp.number=student[i].number;
				temp.chinese=student[i].chinese;
				temp.math=student[i].math;
				temp.total=student[i].total;

				student[i].number=student[j].number;
				student[i].chinese=student[j].chinese;
				student[i].math=student[j].math;
				student[i].total=student[j].total;

				student[j].number=temp.number;
				student[j].chinese=temp.chinese;
				student[j].math=temp.math;
				student[j].total=temp.total;
			}

	for(i=0;i<3;i++)
		printf("%d %d\n",student[i].number,student[i].total);
		
}