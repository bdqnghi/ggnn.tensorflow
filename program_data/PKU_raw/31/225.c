struct student 
{
	char ID[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student *next;
	struct student *before;
};
struct student *create()
{
	struct student *head,*p1,*p2,*end;
	p1=(struct student*)malloc(LEN);
	scanf("%s",p1->ID);
	if(strcmp(p1->ID,"end")==0){free(p1);head=NULL;end=NULL;}
	else
	{
		head=p1;
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		p1->next=NULL;
		p1->before=NULL;
		p2=p1;
		
	do
	{
		p1=(struct student*)malloc(LEN);
		p1->before=p2;
		p1->next=NULL;
		scanf("%s",p1->ID);
		if(strcmp(p1->ID,"end")==0){p2->next=NULL;end=p2;free(p1);break;}
		else
		{
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
			p2->next=p1;
			p1->before=p2;
			p1->next=NULL;
			p2=p1;
		}
	}while(1);
	}
	return(end);	
}
void print(struct student *end)
{
	struct student *p;
	p=end;
	while(p)
	{printf("%s %s %c %d %s %s\n",p->ID,p->name,p->sex,p->age,p->score,p->address);
	p=p->before;
	}

}
int main()
{
	
	struct student *end;
	end=create();
	print(end);
}




