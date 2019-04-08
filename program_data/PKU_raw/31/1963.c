struct student
{
	char num[30];
	char name[20];
	char a[3];
	int age;
	char score[10];
	char add[30];
	struct student *next;
};
int n;
void *malloc(unsigned int size);
void main()
{
	int l=0,i=0;
    struct student *head,*p1,*p2,*newhead,*new1;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%s%s%s%d%s%s",&p1->num,&p1->name,&p1->a,&p1->age,&p1->score,&p1->add);
	head=NULL;
	while(strcmp(p1->num,"end")!=0)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(LEN);
		scanf("%s%s%s%d%s%s",&p1->num,&p1->name,&p1->a,&p1->age,&p1->score,&p1->add);
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
		if(i==0)
			newhead=new1=p1;
		else new1=new1->next=p1;
		p2->next=NULL;
	}
    p1=newhead;
	for(l=0;l<n;l++)
	{
		printf("%s %s %s %d %s %s\n",p1->num,p1->name,p1->a,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
}
