struct student
{
	int age;
	float score;
	char name[100],sex,add[20],num[20];
	struct student *p;
};
void main()
{
	struct student *p1,*head;
	p1=head=(struct student *) malloc(LEN);
	p1->p=NULL;
	scanf("%s %s %c %d %f %s",p1->num,p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
	while (1)
	{
		p1=(struct student *) malloc(LEN);
		scanf("%s",p1->num);
		if (p1->num[0]!='e')
		{
		scanf("%s %c %d %f %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->add);
		p1->p=head;
		head=p1;
		}
		else break;
	}
	p1=head;
	while (p1!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->p;
	}
}

	
