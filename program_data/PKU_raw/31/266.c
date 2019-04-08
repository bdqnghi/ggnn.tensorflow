struct student
{
	char s[10];
	char name[30];
	char sex;
	char age[3];
	char score[6];
	char place[15];
	struct student *next;
	struct student *last;
};
int n;
struct student *creat()
{
	struct student *head1,*head2;
	struct student *p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(100);
    head1=NULL;scanf("%s ",&p1->s);
	do
	{
		scanf("%s %c %s %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->place);
		n=n+1;
		if(n==1)
		{head1=p1;p1->last=NULL;}
		else {p2->next=p1;p1->last=p2;
		p2=p1;}p1=(struct student*)malloc(100);scanf("%s",&p1->s);
	}while(p1->s[0]!='e');head2=p2;
	p2->next=NULL;
	return(head2);
}
void main()
{
	struct student *p1;
	p1=creat();
	do{printf("%s %s %c %s %s %s\n",p1->s,p1->name,p1->sex,p1->age,p1->score,p1->place);
		p1=p1->last;
		}while(p1!=NULL);
}