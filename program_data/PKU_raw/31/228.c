struct student
{
	char ID[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student*next;
};
struct student*creat()
{
	struct student*head,*p1,*p2;
	p1=(struct student*)malloc(LEN); 
    scanf("%s %s %c %d %s %s",p1->ID,p1->name,&p1->sex,&p1->age,p1->score,p1->address);
	p1->next=NULL;
	head=p1;
	p2=p1;
	do
	{
		p1=(struct student*)malloc(LEN); 
		scanf("%s",p1->ID);
	    if(strcmp("end",p1->ID)==0)
		{
			break;
		}
		else
		{
            scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
			p1->next=NULL;
		    p2->next=p1;
		    p2=p1;
		}
	}while(1);
	return(head);
}
void print(struct student*head)
{
	struct student*p,*ppr;
	while(head->next!=NULL)
	{
		ppr=head;
		p=head->next;
		while(p->next!=NULL)
		{
			ppr=p;
			p=p->next;
		}
		printf("%s %s %c %d %s %s\n",p->ID,p->name,p->sex,p->age,p->score,p->address);
		ppr->next=NULL;
	}
	printf("%s %s %c %d %s %s\n",head->ID,head->name,head->sex,head->age,head->score,head->address);
}
int main()
{
	struct student*head;
	head=creat();
	print(head);
}
