
struct node
{
	struct node *last;
	char id[15];
	char name[25];
	char sex;
	int age;
	char score[10];
	char addr[15];
	struct node *next;
};
int n=1;

struct node *newnode()
{
	struct node *head=NULL,*New,*This;
	do
	{
		New=(struct node *)malloc(sizeof(struct node));
		scanf("%s",New->id);
		if(n==1)
		{
			head=New;
			New->last=NULL;
			This=head;
		}
		else
		{
			This->next=New;
			New->last=This;
		}
		if(strcmp(New->id,"end")!=0)
		{
			scanf("%s %c %d %s %s",New->name,&New->sex,&New->age,New->score,New->addr);
			This=New;
			n++;
		}
	}while(strcmp(New->id,"end")!=0);
	This->next=NULL;
	return(This);
}
void main()
{
	struct node *p;
	p=newnode();
	do
	{
		printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->addr);
		p=p->last;
	}while(p->last!=NULL);
	printf("%s %s %c %d %s %s\n",p->id,p->name,p->sex,p->age,p->score,p->addr);
}