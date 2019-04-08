struct student
{
	char num[20];
	char name[20];
	char sex[2];
	char age[20];
	char score[10];
	char add[20];
	struct student *next;
}*head,*p;
void input()
{
	head=NULL;
	int n=0;
	do
	{
		p=(struct student *)malloc(LEN);
		scanf("%s",p->num);
		if(p->num[0]=='e')
			break;
		scanf("%s%s%s%s%s",p->name,p->sex,&p->age,&p->score,p->add);
		n++;
		if(n==1)
			p->next=NULL;
		else
			p->next=head;
		head=p;
	}while(1);
	p=head;
}
void output()
{
		if(head!=NULL)
	{
		do
		{
			printf("%s %s %s %s %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
			p=p->next;
		}while(p!=NULL);
	}
}
void main()
{
	input();
	output();
}
		