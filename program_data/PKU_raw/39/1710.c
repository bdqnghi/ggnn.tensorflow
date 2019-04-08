
void main()
{
	struct student
	{char name[20];
	 int score;
     int fame;
  	 char leader;
	 char west;
	 int paper;
	}stu[100];
	
	int i,n,max=0,k,t;
	int Price[5]={8000,4000,2000,1000,850};
	long int sum=0;

	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].score,&stu[i].fame,&stu[i].leader,&stu[i].west,&stu[i].paper);

	for(i=0;i<n;i++)
	{
		t=0;
		if(stu[i].score>80&&stu[i].paper>0) t+=Price[0];
		if(stu[i].score>85&&stu[i].fame>80) t+=Price[1];
		if(stu[i].score>90) t+=Price[2];
		if(stu[i].score>85&&stu[i].west=='Y') t+=Price[3];
		if(stu[i].fame>80&&stu[i].leader=='Y') t+=Price[4];

		sum+=t;
		if(t>max)
		{
			max=t;
			k=i;
		}
	}


	printf("%s\n%d\n%ld",stu[k].name,max,sum);

}
