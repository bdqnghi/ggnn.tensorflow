struct student
{
	char num[1000];
  	struct student *next;
};
int n;
struct student * creat (void )
{
	struct student * head;
	struct student *p1,*p2;
	char a[4]={"end"};
	n=0;
	p1=p2= (struct student *)malloc(LEN);
	gets( p1->num );
	head = NULL;
	while (strcmp(p1->num,a)!=0)
	{
		n=n+1;
		if (n==1) head =p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(LEN);
		 gets( p1->num );
	}
	p2->next =NULL;
	return head;
}
void print(struct student *head)
{
	struct student *p;
	p=head;
	if (head !=NULL)
		do
		{
			printf("%s\n",p->num );
			p=p->next;
		}
		while (p!=NULL);
}
struct student * sort (struct student *head)
{
     struct student *p1,*p2,*p3;

	 p1=head;
	 p2=p1->next;
	 p1->next=NULL;
	 while( p2->next!=NULL )
	 {
	   head=p2;
	   p3=p2->next;
	   p2->next=p1;
	   p1=p2;
       p2=p3;
	 }
	 head=p2;
	   p2->next=p1;
	   return head;
	 
}
void main()
{
	struct student *head ;
	head=creat();
	head=sort(head);
	print(head);
}