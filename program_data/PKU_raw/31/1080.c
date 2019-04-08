
struct Student
{
	struct Student *prev;
	char number[30];
	char name[30];
	char gender;
	int age;
	double score;
	char address[30];
};

int main()
{
	struct Student a,*p;
	scanf("%s%s %c%d%lf%s",a.number,a.name,&a.gender,&a.age,&a.score,a.address);
	p=(struct Student *)malloc(LEN);
	*p=a;
	(*p).prev=NULL;
	for(;1;)
	{
		scanf("%s",a.number);
		if(a.number[0]=='e')
			break;
		scanf("%s %c%d%lf%s",a.name,&a.gender,&a.age,&a.score,a.address);
		a.prev=p;
		p=(struct Student *)malloc(LEN);
		*p=a;
	}
	printf("%s %s %c %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);
	for(;(*p).prev!=NULL;)
	{
		p=p->prev;
		printf("%s %s %c %d %g %s\n",p->number,p->name,p->gender,p->age,p->score,p->address);
	}
	return 0;
}
