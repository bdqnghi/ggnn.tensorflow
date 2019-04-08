struct stu
	{
		char xh[10];
		char name[20];
		char xb;
		int age;
		char score[20];
		char add[20];
		struct stu *next;
	};
    struct stu *creat()
	{
	struct stu *head,*p1,*p2;
	int n=0;
    p1=p2=(struct stu *)malloc(sizeof (struct stu));
	head=0;
	while(strcmp(p1->xh,"end")!=0)
	{
		n++;
		if(n==1)
		{
			p1->next=0;
			head=p1;
		}
		else
		{
	    	p2=p1;
	    	p1=(struct stu *)malloc(sizeof (struct stu));
	    	p1->next=p2;
		}
		scanf("%s",&p1->xh);
		if(strcmp(p1->xh,"end")==0)
		{
			head=p2;
			break;
		}
		scanf(" %s %c %d %s %s",&p1->name,&p1->xb,&p1->age,&p1->score,&p1->add);
	}
	return (head);
	}
void print(struct stu *head)
{
	struct stu *p;
	p=head;
	while (p!=0)
	{
		printf("%s %s %c %d %s %s\n",p->xh,p->name,p->xb,p->age,p->score,p->add);
		p=p->next;
	}
}
    void main()
	{
		struct stu *head;
		head=creat();
		print(head);
	}
