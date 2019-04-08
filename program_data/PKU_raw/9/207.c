struct info
{
	int num;
	char data[10];
	struct info*next;
	int tip;
};

struct info*create(int n)
{
	struct info *p1,*pre,*p2,*head,*tail;
	int i,t;
	head=(struct info*)malloc(sizeof(struct info));
	p1=(struct info*)malloc(sizeof(struct info));
	scanf("%s %d",p1->data,&p1->num);
	head->next=p1;
	p1->next=NULL;
	tail=p1;
	i=0;
	while(i<n-1)
	{
		t=0;
		p1=(struct info*)malloc(sizeof(struct info));
		scanf("%s %d",p1->data,&p1->num);
		p1->next=NULL;
		if(p1->num>=60)
		{
			for(pre=head,p2=head->next;p2!=NULL&&p2->num>=60;pre=pre->next,p2=p2->next)
			{
			if(p2->num<p1->num)
			{
				pre->next=p1;
				p1->next=p2;
			    t=1;
				break;
			}
			}
            if(t==0)
			{
			pre->next=p1;
		    p1->next=p2;
			if(p2==NULL)
			{tail=p1;}
			}
		}
		else
		{
			tail->next=p1;
			tail=p1;
		}
	i++;
	}
	return head;
}
void print(struct info *head)
{
	struct info *p;
	p=head->next;
	while(p!=NULL)
	{
		printf("%s\n",p->data);
	    p=p->next;
	}
}
int main()
{
	int n;
	struct info *head;
	scanf("%d",&n);
	head=create(n);
    print(head);
}

