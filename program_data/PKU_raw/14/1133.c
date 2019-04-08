struct stu
{long num;
int Chi;
int Math;
int Sum;
struct stu *next;
}*p1,*p2;
//????
struct stu * creat(int n)
{struct stu *head=NULL;
int i;
for(i=0;i<n;i++)
{
	p1=(struct stu *)malloc(sizeof(struct stu));
	
	scanf("%d %d %d",&p1->num,&p1->Chi,&p1->Math);
	p1->Sum=p1->Chi+p1->Math;
	if(i==0){ head=p1; p2=p1;}
	else 
		p2->next=p1;
		p2=p1;
}
p2->next=NULL;
return(head);
}

struct stu *Bigthree(struct stu *head)
{int t;
	struct stu *max,*premax,*New,*Newhead=NULL;
	for(t=0;t<3;t++)
	{
		premax=NULL;
		max=head;
		p2=head;
		p1=head->next;
		while(p1!=NULL)
		{
			if((p1->Sum)>(max->Sum))	
			{premax=p2;
				max=p1;
			}
			p2=p2->next;
			p1=p1->next;
		}
		if(max == head)
			head = head->next;
		else premax->next=max->next;
		max->next=NULL;
		if(t==0){Newhead=max;
		New=Newhead;}

		else
		New=New->next=max;
	}
	New->next=NULL;
	return(Newhead);
}

//???????????
void output(struct stu *head)
{struct stu *p;
	for(p=head;p!=NULL;printf("%d %d\n",p->num,p->Sum),p=p->next);
}

void main()
{int n;
struct stu *head;
scanf("%d",&n);
	head=creat(n);
	head=Bigthree(head);
	output(head);
}











