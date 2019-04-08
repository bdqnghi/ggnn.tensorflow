struct student
{
	char _no[9];
	char name[20];
	char sex[1];
	int age;
	float score;
	char add[20];
	struct student *next;
};
int n;
void main()
{
	int i;
	struct student *p1;
	struct student *p2;
	struct student *head;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	head=NULL;
	for(n=0;;)
	{
		n=n+1;
		p1=(struct student*)malloc(LEN);
		if(n==1)
		{
			p2->next=NULL;
		}
		{
			scanf("%s",p1->_no);
			if(p1->_no[0]!='e')
			{
				scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->age,&p1->score,p1->add);
				p1->next=p2;
				p2=p1;
			}
			else
			{
				head=p2;
				break;
			}
		}
	}
	p1=head;
	for(i=0;p1->next!=NULL;i++)
	{
		printf("%s %s %s %d %g %s\n",p1->_no,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
}
