struct pa{
	char id[10];
	int age;
	struct pa* next; 
}*head,*p,*p2;

int main()
{
	int i,j,n,t;
	char tid[10];
	scanf("%d",&n);
	head=(struct pa*)malloc(sizeof(struct pa));
	p=(struct pa*)malloc(sizeof(struct pa));
	scanf("%s %d",p->id,&p->age);
	head->next=p;
	p->next=NULL;
	p2=p;
	for(i=1;i<n;i++)
	{		
		p=(struct pa*)malloc(sizeof(struct pa));
		scanf("%s %d",p->id,&p->age);
		p2->next=p;
		p2=p;
		p2->next=NULL;
	}

//	for(p=head->next;p!=NULL;p=p->next)printf("%s\n",p->id);	

	for(i=0;i<n;i++)				//???????????, ????GE?????
	{			
		for(p=head->next;p->next!=NULL;p=p->next)		
		{
			if(p->next->age>=60 && p->next->age>p->age)  //???????..?????????.
			{	t=p->age,p->age=p->next->age,p->next->age=t;
				strcpy(tid,p->id),strcpy(p->id,p->next->id),strcpy(p->next->id,tid);
			}
		}			
	}	

	p=head->next;	
	for(i=0;i<n;i++)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
	return 0;

}