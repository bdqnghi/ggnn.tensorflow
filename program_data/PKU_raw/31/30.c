
struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[20];
	struct student*next;
};

char t[4]={"end"};
struct student*p1,*p2;
struct student * creat(void)   //???????
{ 
	struct student*head;
    int	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s", p1->num);
	while ( strcmp(p1->num,t)!=0) 
	{
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->address);
		n=n+1;
		if(n==1) 
		{
			head = p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;		
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
	}
	p2->next = NULL;
	return(head);
}         


struct student*order(struct student*head) //???????
{
	struct student*ben,*rehead=NULL;
    while(head->next!=NULL)
	{
		p2=NULL;
		p1=head;
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(rehead==NULL)
		{
			rehead=p1;
			ben=rehead->next=p2;
		}
			ben=ben->next=p2;
			p2->next=NULL;
	};
	return(rehead);
}

void print(struct student*head)  //???????
{
	struct student*p;
	p=head;
	if(head!=NULL)
	do
	{
    printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
	p=p->next;
	}while(p!=NULL);
}

int main()
{
	struct student*head;
	head=creat();
	head=order(head);
	print(head);
    return 0;
}
			
