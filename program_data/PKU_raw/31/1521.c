struct stu
{char info[50];
struct stu *next;
}*p1,*p2;
int n;
struct stu *creat(void)
{struct stu *head=NULL;
n=0;
p1=p2=(struct stu *)malloc(sizeof(struct stu));//???????
gets(p1->info);
while(strcmp(p1->info,"end")!=0)
{n++;
if(n==1) head=p1;
else p2->next=p1;
p2=p1;
p1=(struct stu *)malloc(sizeof(struct stu));
gets(p1->info);
}
p2->next=NULL;
return (head);
}

struct stu * turnback(struct stu *head)
{
	struct stu *New,*Newhead=NULL;
	do{
		p2=NULL;
		p1=head;
		while(p1->next!=NULL)
		{p2=p1;
		p1=p1->next;
		}
		if(Newhead==NULL)
		{
			Newhead=p1;
			New=Newhead->next=p2;
		}
		New=New->next=p2;
		p2->next=NULL;
	}while(head->next!=NULL);
	return(Newhead);
}
void output(struct stu *head)
{for(p1=head;p1!=NULL;puts(p1->info),p1=p1->next);
}
void main()
{
	struct stu *head;
	head=creat();
	head=turnback(head);
	output(head);
}


