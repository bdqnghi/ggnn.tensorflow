
int main()
{
struct joyan
	{
		char num[10];
		char name[20];
		char sex[1];
		int age;
		float score;
		char add[20];
		struct joyan * next;
	};
	struct joyan *head,*p1,*p2;
    p1=p2=head=(struct joyan *)malloc(LEN);
	scanf("%s%s%s%d%f%s",p1->num,p1->name,p1->sex,&p1->age,&p1->score,p1->add);
	p1->next = NULL;
	int n=1,i;
	while(p1->num[0]>='0'&&p1->num[0]<='9')
	{
		p1=(struct joyan *)malloc(LEN);
		scanf("%s",p1->num);
		if (p1->num[0]!='e')
		{
			scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->age,&p1->score,p1->add);
            p2->next=p1;
			p2=p1;
			n++;
		}
		else
		{ 
			p2->next=NULL;
		    break;
		}

	}
    struct joyan *p,*q,*temp;
	p=head;
	if(p->next!=NULL)
	{
		q=p->next;
		if(q->next==NULL)
		{
			p->next=NULL;
			q->next=p;
		}
		else
		{
			p->next=NULL;
			temp=p;
			p=q;
			q=q->next;
			while(q->next!=NULL)
			{
				p->next=temp;
				temp=p;
				p=q;
				q=q->next;
			}
			p->next=temp;
			q->next=p;
		}
		head=q;
	}

	p1=head;
	for(i=0;i<n;i++)
	{
		printf("%s %s %s %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->add);
		p1=p1->next;
	}
	return 0;
}