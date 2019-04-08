
	struct student
	{
		char name[21];
		int gpa;
		int c_gpa;
		char official;
		char west;
		int paper;
	};

void main()
{
	int process( struct student *p);
	
	struct student stu[100],*p,*P=NULL;
	int i=0,n,TOTAL=0,max=0,MAX=0;


	p=stu;
	scanf("%d\n",&n);
	for(i;i<n;i++)
	{
		
		scanf("%s %d %d %c %c %d",p->name,&p->gpa,&p->c_gpa,&p->official,&p->west,&p->paper);
		max=process(p++);
		if(max>MAX) {MAX=max;P=p-1;}
		TOTAL += max;
	}

	printf("%s\n%d\n%d", P->name,MAX,TOTAL);

}

int process( struct student *p)
{
	int prize=0;
	if (p->gpa>80 && p->paper>=1) prize += 8000;
	if (p->gpa>85 && p->c_gpa>80) prize += 4000;
	if (p->gpa>90) prize += 2000;
	if (p->gpa>85 && p->west=='Y') prize += 1000;
	if (p->c_gpa>80 && p->official=='Y') prize +=850;
	return prize;
}
