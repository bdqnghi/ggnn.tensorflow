void main()
{
	struct s
	{char name[20];
	 int gpa;
	 int cgpa;
	 char official;
	 char west;
	 int paper;
	}stu[100];
	int m[100]={0},n,i,max=0,num=0;
	long sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].name);
		scanf("%d",&stu[i].gpa);
		scanf("%d",&stu[i].cgpa);
		getchar();
		scanf("%c",&stu[i].official);
		getchar();
		scanf("%c",&stu[i].west);
		scanf("%d",&stu[i].paper);
		if(stu[i].gpa>80&&stu[i].paper>0) m[i]=m[i]+8000;
		if(stu[i].gpa>85&&stu[i].cgpa>80) m[i]=m[i]+4000;
		if(stu[i].gpa>90) m[i]=m[i]+2000;
		if(stu[i].gpa>85&&stu[i].west=='Y') m[i]=m[i]+1000;
		if(stu[i].cgpa>80&&stu[i].official=='Y') m[i]=m[i]+850;
		sum=sum+m[i];
		if(m[i]>max)
		{
			max=m[i];
			num=i;
		}
	}
	printf("%s\n%d\n%d\n",stu[num].name,max,sum);
}