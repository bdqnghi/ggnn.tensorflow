struct student 
{
	char id[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student *next;
	struct student *pre;
};
struct student *create(void)
{
	struct student *head,*p1,*p2,*end;
	p1=(struct student *)malloc(LEN);
	scanf("%s %s %c %d %s %s",p1->id,p1->name,&p1->sex,&p1->age,p1->score,p1->address);
	p1->next=NULL;
	p1->pre=NULL;
	head=p1;
	p2=p1;
	do
	{
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->id);
		if(strcmp("end",p1->id)==0)
		{
			break;
		}
		else
		{
			scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		    p1->next=NULL;
		    p1->pre=NULL;
			p2->next=p1;
			p1->pre=p2;
			p2=p1;
		}
	}while(1);
	end=p2;
	return(end);
}
void print(struct student*end)
{
	struct student*p;
	p=end;
	while(p)
	{
		printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->address);
		p=p->pre;
	}
}

int main()
{
	struct student *end;
	end=create();
	print(end);
}



