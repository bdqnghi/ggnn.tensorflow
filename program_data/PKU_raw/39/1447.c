void main()
{
	int n,i,s=0,max;
	double A[200],sum;
	struct student
	{
		char name[50];
		int AP;
		int EP;
		char L;
		char D;
		int paper;
	};
	struct student stu[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].AP,&stu[i].EP,&stu[i].L,&stu[i].D,&stu[i].paper);
		if(stu[i].AP>80&&stu[i].paper>0)
			s=s+8000;
		if(stu[i].AP>85&&stu[i].EP>80)
			s=s+4000;
		if(stu[i].AP>90)
			s=s+2000;
		if(stu[i].AP>85&&stu[i].D=='Y')
			s=s+1000;
		if(stu[i].EP>80&&stu[i].L=='Y')
			s=s+850;
		A[i]=s;
	}
	for(i=0,max=0,sum=0;i<n;i++)
	{
		if(A[i]>A[max]) max=i;
		sum=sum+A[i];

	}
	printf("%s\n%.lf\n%.lf\n",stu[max].name,A[max],sum);
}
