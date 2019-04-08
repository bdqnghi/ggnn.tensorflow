

struct student
{
	char num[10];
	char name[20];
	char sex[2];
	int age;
	char score[30];
	char add[30];
	struct student *next;
};

int main()
{	struct student *head;
	struct student *p1,*p2,*p;	
	p2=p=(struct student*)malloc(sizeof(struct student));
	scanf("%s%s%s%d%s%s",p2->num,p2->name,p2->sex,&p2->age,p2->score,p2->add);
	p2->next=NULL;
 	do
	{	
		p2=(struct student*)malloc(sizeof(struct student));
		scanf("%s",p2->num);
		if(strcmp(p2->num,"end")==0)
			break;
		scanf("%s%s%d%s%s",p2->name,p2->sex,&p2->age,&p2->score,p2->add);
		p2->next=p;
		p=p2;
		
	}
	while(strcmp(p2->num,"end")!=0);
	head=p;
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		printf("%s %s %s %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
	}
	return 0;
}

