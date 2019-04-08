struct student
{
	char id[20];
	char name[20];
	char sex;
	int age;
	char score[20];
	char addr[20];
	struct student *next;
	struct student *before;
};
int n;
struct student *creat(void)
{
	struct student *head,*p1,*p2;
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
		p1->before=p2;
		scanf("%s",p1->id);
	}
	p2->next=NULL;
	return(p2);
}
void main()
{
    struct student *p;
    int i;
	p=creat();
	printf("%s %s %c %d %s %s",&p->id,&p->name,p->sex,p->age,&p->score,&p->addr);
	for(i=1;i<n;i++)
	{
	    p=p->before;
		printf("\n%s %s %c %d %s %s",&p->id,&p->name,p->sex,p->age,&p->score,&p->addr);
	}
}