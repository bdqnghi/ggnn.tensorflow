struct student
{
	char num[20];
	char name[20];
	char sex[20];
	char age[20];
	char score[20];
	char add[20];
	struct student *next;
};
int n;

void main()
{
	int i;
	struct student *head,*p1,*p2,*newhead,*new;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s",p1->num);
	while(strcmp(p1->num,"end")!=0)//built link;
	{
		scanf("%s%s%s%s%s",p1->name,p1->sex,p1->age,p1->score,p1->add);
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s",p1->num);
	}
	p2->next=NULL;
	for(i=0;i<n;i++)
	{
		p2=p1=head;
		while(p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(i==0)newhead=new=p1;
		else new=new->next=p1;
		p2->next=NULL;
	}
	p1=newhead;
	for(i=0;i<n;i++)
	{
		printf("%s %s %s %s %s %s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
		printf("\n");
	}
	
}

			






