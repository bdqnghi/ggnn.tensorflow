void main()
{
   struct student
   {char name[20];
 int grade;
 int eva;
 char pres;
 char west;
 int paper;
 int money;
   }stu[100];

	int n,i,sum,j;
	struct student *p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].grade,&stu[i].eva,&stu[i].pres,&stu[i].west,&stu[i].paper);

	for(i=0;i<n;i++)
	{
		stu[i].money=0;
		if(stu[i].grade>80 && stu[i].paper>=1)
			stu[i].money=stu[i].money+8000;
		if(stu[i].grade>85 && stu[i].eva>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].grade>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].grade>85 && stu[i].west=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].eva>80 && stu[i].pres=='Y')
			stu[i].money=stu[i].money+850;
	}
	for(i=0,sum=0;i<n;i++)
		sum=sum+stu[i].money;
	for(i=1,p=&stu[0];i<n;i++)
		{	if(stu[i].money>p->money)
				p=stu+i;
		}

   printf("%s\n%d\n%d\n",p->name,p->money,sum);
}

