struct student
{
	char num[30];
	float chi;
	float mat;
	float tot;
	struct student *next;
};


struct student * creat(struct student *head,struct student *stud)
{
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stud;
	if(head==NULL)
	{head=p0;p0->next=NULL;}
	else
	{while((p0->tot<=p1->tot)&&(p1->next!=NULL))
		{p2=p1;p1=p1->next;}
	 if(p0->tot>=p1->tot)
	 {if(head==p1) head=p0;
	  else p2->next=p0;
	  p0->next=p1;}
	 else
	 {p1->next=p0;p0->next=NULL;}
	}
	return(head);
}

struct student * compare(struct student *head,struct student *stud)
{
	struct student *p0,*p1,*p2;
	int i;
	p1=head;
	p0=stud;
	while((p0->tot<=p1->tot)&&(p1->next!=NULL))
		{p2=p1;p1=p1->next;}
	if((p0->tot>p1->tot)||((p0->tot=p1->tot)&&(p1->next!=NULL)))
	{  
      if(head==p1) head=p0;
	  else p2->next=p0;
	  p0->next=p1;
	  p1=head;
	  for(i=0;i<2;i++)
	  {p1=p1->next;}
	  p1->next=NULL;
	  
	}

	return(head);
}

void print(struct student * head)
{
	struct student *p;
	int i;
	p=head;
	for(i=0;i<3;i++)
	{
		printf("%s %g\n",p->num,p->tot);
		p=p->next;
	}
}

void main()
{
	struct student *head;
	struct student *stu;
	int n,i;
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{   stu=(struct student *)malloc(LEN);
		scanf("%s %f %f",&stu->num,&stu->chi,&stu->mat);
		stu->tot=stu->chi+stu->mat;
		head=creat(head,stu);
		
	}
	for(i=3;i<n;i++)
	{   
		stu=(struct student *)malloc(LEN);
		scanf("%s %f %f",&stu->num,&stu->chi,&stu->mat);
		stu->tot=stu->chi+stu->mat;
		head=compare(head,stu);

	}
	print(head);
}
