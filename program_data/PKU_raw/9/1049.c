struct sick
{
	int age;
	char id[100];
	struct sick *next;
};
struct sick *insert(struct sick *head,struct sick *new1)
{
	struct sick *p0,*p1,*p2,*p;
	p1=head;
	p0=new1;
	if(head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	else
	{
	 	if(p0->age<60)
		{
			p1=head;
			while(p1!=NULL)
			{
				p2=p1;
				p1=p1->next;
			}
			p2->next=p0;
			p0->next=NULL;
		}
		else
		{
		   while((p1->age>=p0->age)&&(p1->next!=NULL)) /*?????????????????*/
		   {
			p2=p1;
			p1=p1->next;
		   } 
		   if(p0->age>p1->age)      /*?????????????????*/
		   {
			 if(head==p1)
				head=p0;
			 else 
				p2->next=p0;
			 p0->next=p1;
		   }
	 	   else
		   {
			p1->next=p0;
			p0->next=NULL;
		   }
		}
	}
	return(head);
}
void main()
{
	struct sick *head,*p;
	int n,i;
	head=NULL;  /*head????NULL????,????????*/
	scanf("%d",&n);
	struct sick *insert(struct sick *head,struct sick *new1);/*??*/
	for(i=0;i<n;i++)
	{	
		p=(struct sick*)malloc(sizeof(struct sick));
        scanf("%s %d",p->id,&p->age);
		head=insert(head,p);
	}
	p=head;
	do
	{
		printf("%s\n",p->id);
		p=p->next;
	}while(p!=NULL);
}
