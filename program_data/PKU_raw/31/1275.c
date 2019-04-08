struct student
{
	char id[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char addr[20];
	struct student *next;
};
int n;
struct student *head;
struct student *creat(void)
{
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student *)malloc(LEN);
	scanf("%s",p1->id);
	head=NULL;
	while(strcmp(p1->id,"end")!=0)
	{
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->addr);
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->id);
	}
	p2->next=NULL;
	return(head);
}
void main()
{
	head=creat();
    struct student *p,*p0;
	p=(struct student *)malloc(100*LEN);
	p0=(struct student *)malloc(LEN);
	p0=head;
	int i;
	for(i=0;i<n;i++,p++)
	{
		*p=*p0;
		p0=p0->next;
	}
	p--;
	printf("%s %s %c %d %s %s",&p->id,&p->name,p->sex,p->age,&p->score,&p->addr);
	p--;
	for(i=1;i<n;i++,p--)
		printf("\n%s %s %c %d %s %s",&p->id,&p->name,p->sex,p->age,&p->score,&p->addr);
}
