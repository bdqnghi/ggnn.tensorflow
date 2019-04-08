
struct example
{
	char id[10];
	int age;
	struct example *next;
};

int i=1,d,n;
struct example *creat(int n)
{struct example *head=NULL;
struct example *p1,*p2;
while(i<=n)
{
	p1=(struct example *)malloc(sizeof(struct example));
	scanf("%s%d",&(*p1).id,&(*p1).age);
if(i==1)
{head=p1;
p2=head;}
else 
p2->next=p1;
p2=p1;
i=i+1;
}
p2->next=NULL;
return(head);
}

struct example *paixu(struct example *head)
{
	char temp1[10]={'\0'};
	int temp2;
	struct example *p1,*p2;
	p1=p2=head;

    for(i=1;i<n;i++)
	{
		p1=head;
		while(p1->next!=NULL)
	{
		p2=p1->next;
		if(p1->age<p2->age&&((p2->age)>=60))
		{strcpy(temp1,p1->id);
		strcpy(p1->id,p2->id);
		strcpy(p2->id,temp1);
		temp2=p1->age;
		p1->age=p2->age;
		p2->age=temp2;
		}
		p1=p1->next;
	}
	}
	return head;
}

void print(struct example *head)
{struct example *s;
s=head;
if(head!=NULL)
do
{printf("%s\n",s->id);
s=s->next;
}while(s!=NULL);
}


void main()
{
	struct example *head=NULL;
	scanf("%d",&n);
	head=creat(n);
	head=paixu(head);
	print(head);
}




