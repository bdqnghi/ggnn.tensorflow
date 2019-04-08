struct student{
char num[20];
char name[20];
char sex;
int age;
float score;
char address[20];
struct student *next;
};
int n;
struct student *create()
{
	struct student *head;
	struct student *p1,*p2;
	head=NULL;
	n=0;
	p1=p2=(struct student *)malloc(len);
	scanf("%s",p1->num);
	if(p1->num[0]=='e')
            return(head);
    scanf("%s %c %d%f %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
	//printf("%s %s %c %d%d %s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
	while(n!=-1)
	{
		n++;
		if(n==1)
			p1->next=NULL;
		else
			p1->next=p2;
		p2=p1;
		p1=(struct student *)malloc(len);
		scanf("%s",p1->num);
		if(p1->num[0]=='e')
            break;
		scanf("%s %c %d%f %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
		//printf("%s %s %c %d%d %s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
	}
	head=p2;
	return(head);
}
void print(struct student *p)
{
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}
}
void main()
{
	struct student *p;
	p=create();
	print(p);
}