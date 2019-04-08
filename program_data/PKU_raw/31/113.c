struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char add[20];
	struct student *next;
};
void main()
{
	struct student *p1,*p2;
		p1=p2=(struct student *)malloc(sizeof(struct student));
	p1->next=NULL;
	while(1)
	{
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")!=0)
		{
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->add);
			p1=(struct student *)malloc(sizeof(struct student));
			p1->next=p2;
			p2=p1;
		}
		else
			break;
	}
	p1=p1->next;
	while(p1->next!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
	printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
}