struct student
{char num[20];
char name[20];
char sex[2];
int old;
float grade;
char address[100];
struct student *next;
};
int main()
{
	struct student *p1,*p2;
	p1=p2=NULL;
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%s",p1->num);
    if(p1->num[0]=='e')
		return 0;
do
	{	

		scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->old,&p1->grade,p1->address);
		p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		p1->next=p2;
scanf("%s",p1->num);

	}	while(p1->num[0]!='e');
	
	while(p2!=NULL)
	{
		printf("%s %s %s %d %g %s\n",p2->num,p2->name,p2->sex,p2->old,p2->grade,p2->address);
		p1=p2->next;
		p2=p1;
	}

	return 0;

}