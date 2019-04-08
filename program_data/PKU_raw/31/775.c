struct arr
{
	char num[20];
	char name[50];
	char sex;
	int age;
	float score;
	char address[50];
	struct arr *next;
};
int n;

struct arr *create(void)                   
{
	struct arr *head;
	struct arr *p1,*p2;
	n=0;
	p1=p2=(struct arr *)malloc(LEN);
	scanf("%s %s %c %d %f %s",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);                           
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct arr *)malloc(LEN);
		scanf("%s",&p1->num );
		if(strcmp(p1->num,"end")==0)break;
		scanf("%s %c %d %f %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
	}
	p2->next=NULL;
	return(head);
}
struct arr *reverse(struct arr *head)
{
	struct arr *p1,*p2,*p3;
	p1=p2=head;
	if(p1!=NULL&&p1->next!=NULL)
	{
		p1=p1->next;
		p2->next=NULL;
		while(p1!=NULL&&p1->next!=NULL)
		{
			p3=p1;
			p1=p1->next;
			p3->next=p2;
			p2=p3;
		}
		head=p1;
		p1->next=p2;
	}
	return(head);
}
void print(struct arr *head)
{
	int b;
	struct arr *p1;
	p1=head;
	while(p1!=NULL)
	{
		b=(int)p1->score;
		if(p1->score-b==0.0)
		printf("%s %s %c %d %d %s\n",p1->num,p1->name,p1->sex,p1->age,b,p1->address);       
		else
			printf("%s %s %c %d %.1f %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address); 
		p1=p1->next;
	}
}

void freelist(struct arr *head)
	{
		struct arr *p=head ;
		while(p!=NULL)
		{
			head=head->next;
			free(p);
			p=head;
		}
}
void main()
{ 
	struct arr *head;
	head=create();
	head=reverse(head);
	print(head);
	freelist(head);
}
