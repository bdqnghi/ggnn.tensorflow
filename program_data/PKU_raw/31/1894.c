struct w
{char id[100];
struct w *next;
};
struct w *head,*new,*newhead,*p1,*p2;
 int i,n;
struct w *create(void)
{
    n=0;
	head=null;
	p1=p2=(struct w *)malloc(len);
	gets(p1->id);
	while(strcmp(p1->id,"end")!=0)
	{
	n++;
	if(n==1)head=p1;
	else p2->next=p1;
	p2=p1;
	p1=(struct w *)malloc(len);
	gets(p1->id);
	}
	p2->next=null;
	return head;
}
void main()
{
	head=create();
	for(i=0;i<n;i++)
	{p2=p1=head;
	while(p1->next!=null)
	{p2=p1;p1=p1->next;}
	if(i==0) newhead=new=p1;
	else new=new->next=p1;
	p2->next=null;
	}
	p1=newhead;
	for(i=0;i<n;i++)
	{printf("%s\n",p1->id);
	p1=p1->next;
	}
}