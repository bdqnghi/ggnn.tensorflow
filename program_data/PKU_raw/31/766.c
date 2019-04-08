struct student
{
	char number[20];
	char name[20];
	char sex[2];
	int year;
	float score;
	char address[100];
	struct student *next;
};
int main()
{
	struct student *p1,*p2;
	p1=(struct student *)malloc(sizeof(struct student));
	p1->next=NULL;
	scanf("%s",p1->number);
	while(p1->number[0]!='e')
	{
		scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->year,&p1->score,p1->address);
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		p1->next=p2;
		scanf("%s",p1->number);
	}
	while(p2!=NULL)
	{
		printf("%s %s %s %d %g %s\n",p2->number,p2->name,p2->sex,p2->year,p2->score,p2->address);
		p2=p2->next;
	}
	return 0;
}