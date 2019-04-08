struct student 
{
	struct student *next;
	char a[100];
};
int n;
struct student *creat()
{
	struct student *p1,*p2,*head;
	n=0;
	p1=(struct student *)malloc(sizeof(struct student ));
	gets(p1->a);
	p2=p1;
	head=NULL;
	while (strcmp(p1->a,"end")!=0)
	{
		n=n+1;
		if(n==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student ));
		gets(p1->a);
	}
	p2->next=NULL;
	return(head);
}
/*void main()
{
	struct student *p,*head;
	head=creat();
	p=head;
	while(p!=NULL)
	{
		printf("%s\n",p->a);
		p=p->next;
	}

}*/
void main()
{
    struct student *p1,*head,*p2;
	head=creat();
	p1=head;
	
	while(1)
	{
		
		if(p1->next!=NULL) {p2=p1;p1=p1->next;}
		if(p1->next==NULL&&p2!=head)
		{
			
			printf("%s\n",p1->a);
			p2->next=NULL;
			p1=head;
		}
		if(p1->next==NULL&&p2==head) break;
		

	}
	printf("%s\n%s",p1->a,head->a);
}

