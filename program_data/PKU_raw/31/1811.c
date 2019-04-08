
struct student 
{
	char num[10];
	char name[30];
	char gender;
	int age;
	char score[10];
	char address[30];
	struct student *before;
};

void main ()
{
	struct student stu[1000], *tail, *p;
	int i=0,j;

	
	while (scanf ("%s %s %c %d %s %s",&stu[i].num, &stu[i].name, 
			&stu[i].gender, &stu[i].age, &stu[i].score, &stu[i].address)!=EOF)
			i++;
//	for (i=0;stu[i].num[0]!='e';i++)
//	{
//		scanf ("%s %s %c %d %d %s",stu[i].num, stu[i].name, 
//			&stu[i].gender, &stu[i].age, &stu[i].score, stu[i].address);
//	}
	tail=&stu[i-1];
	for (j=i-1;j>=0;j--)
		stu[j].before=&stu[j-1];
	stu[0].before=0;
	p=tail->before;
	do 
	{
		
			printf ("%s %s %c %d %s %s\n",p->num, p->name, p->gender,
				p->age, p->score, p->address);


	p=p->before;
	}
	while (p!=0);	
}
