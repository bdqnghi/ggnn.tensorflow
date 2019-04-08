struct patient
{
	char id[10];
	int age;
	struct patient *next;
};
int n;
struct patient *creat(int num)  /*????*/
{
	struct patient *head,*p1,*p2;
	n=0;
	p1=p2=(struct patient *)malloc(sizeof(struct patient));
	scanf("%s %d",p1->id,&p1->age);
	head=NULL;
	while(n<(num-1))
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct patient *)malloc(sizeof(struct patient));
		scanf("%s %d",p1->id,&p1->age);
	}
	p2->next=p1;
	p1->next=NULL;
	return(head);
}
struct patient *old(struct patient *head)  /*??????????????old???????????60?????????*/
{
	struct patient *old,*p1,*p2,*p;
	n=0;
	p=head;
	p1=p2=(struct patient *)malloc(sizeof(struct patient));
	old=NULL;
	while(p!=NULL)
	{
		if((n==0)&&(p->age>=60)) 
		{
			strcpy(p1->id,"");
			strcpy(p1->id,p->id);
			p1->age=p->age;
			old=p1;
			p2=p1;   /*?????????????????*/
			n=1;       /*?????????????????*/
		}
		else if(p->age>=60)
		{
			strcpy(p1->id,"");
			strcpy(p1->id,p->id);
			p1->age=p->age;
			p2->next=p1;
            p2=p1;            /*?????????????p2=p1???????*/
		}		
		p1=(struct patient *)malloc(sizeof(struct patient));
		p=p->next;
	}
	p2->next=NULL;
	return(old);
}
struct patient *sort(struct patient *head)   /*?????????????????????????????????????*/
{
	struct patient head0,end0;
	struct patient *p0,*p1,*p2,*p;
	head0.next=head;
	p=head;
	while(p->next!=NULL)
		p=p->next;
	p=p->next=&end0;
	while(p!=head0.next)   /*????????????????p!=head,????p!=head0.next*/
	{
		p0=&head0;
		p1=p0->next;
		p2=p1->next;
		while(p2!=p)
		{
			if((p1->age)<(p2->age))
			{
				p0->next=p2;
				p1->next=p2->next;
				p2->next=p1;
				p0=p2;
				p2=p1->next;
			}
			else
			{
				p0=p1;
				p1=p2;
				p2=p2->next;
			}
		}
		p=p1;
	}
	while(p->next!=&end0)
		p=p->next;
	p->next=NULL;
	return(p1);
}
void print2(struct patient *head)   /*??????????????60????id*/
{
	struct patient *p;
	p=head;
	while(p!=NULL)
	{
	   if(p->age<60) printf("%s\n",p->id),p=p->next;
	   else p=p->next;
	}	
}
void print1(struct patient *head)    /*???????????????????????????id*/
{
	struct patient *p;
	p=head;
	while(p!=NULL)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
}
void main()
{
	struct patient *creat(int num);
	struct patient *old(struct patient *head);
    struct patient *sort(struct patient *head);
	void print1(struct patient *head);
	void print2(struct patient *head);
	struct patient *head,*oldp,*sortold;  /*???????????????*sortold?????????????????*/
	int num;
	scanf("%d",&num);
	head=creat(num);
	oldp=old(head);
	sortold=sort(oldp);
	print1(sortold);
	print2(head);
}