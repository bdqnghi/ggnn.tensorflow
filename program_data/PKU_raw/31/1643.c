struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[10];
	char address[50];
	struct student *next;
};
void main()
{
	struct student *head,*p,*s;
	head=(struct student *)malloc(sizeof(struct student));
	head->next=NULL;
    p=head->next;	
	for(;;)
	{
		s=(struct student *)malloc(sizeof(struct student));
		s->next=NULL;
		scanf("%s",s->num);
		if(strcmp(s->num,"end")==0)
			break;
		scanf("%s %c %d %s %s",s->name,&s->sex,&s->age,s->score,s->address);
		head->next=s;
		s->next=p;
		p=s;
	}
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}