	struct student
	{
		char num[100];
		struct student *next;
	};
	int n;

	struct student *creat(void)
	{
		struct student *head;
		struct student *p1,*p2;
		n=0;
		p1=p2=(struct student*)malloc(LEN);
		gets(p1->num);
		head=NULL;
		while(strcmp(p1->num,"end"))
		{
			n++;
			p1->next=head;
			head=p1;
			p1=(struct student*)malloc(LEN);
gets(p1->num);
		}
		p1->next=NULL;
		return(head);
	}

	void print(struct student *head)
	{
		struct student *p;
		p=head;
		if(head)
			do
			{
				puts(p->num);
				p=p->next;
			}
			while(p);
	}

	void main()
	{
		struct student *head;
		head=creat();
		print(head);
	}
