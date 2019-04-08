	struct student       
	{
		int num;
		int chi;
		int math;
		int sum;
		struct student *next;
	};

    struct student *creat(int n)
	{
		int i;
	struct student *head,*p1,*p2;
	
	p1=(struct student*)malloc(sizeof(struct student));
	scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
	p1->sum=p1->chi+p1->math;

	head=p1;
	p2=p1;
	
	for(i=1;i<n;i++)
	{
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%d %d %d",&p1->num,&p1->chi,&p1->math);
		p1->sum=p1->chi+p1->math;
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;

	return(head);
	}
    
	void main()
	{
		struct student *head,*p1;
		struct student *max1,*max2,*max3;
		int n,max;
		
	    scanf("%d",&n);
		
		head=creat(n);
		
		p1=head;
		max=0;		
		while(p1!=NULL)
		{
			if(p1->sum>max)
			{
				max=p1->sum;
				max1=p1;
			}
			p1=p1->next;
		}
		printf("%d %d\n",max1->num,max1->sum);

		p1=head;
		max=0;
		while(p1!=NULL)
		{
			if(p1->sum>max&&p1!=max1)
			{
				max=p1->sum;
				max2=p1;
			}
			p1=p1->next;
		}
		printf("%d %d\n",max2->num,max2->sum);

		p1=head;
		max=0;
		while(p1!=NULL)
		{
			if(p1->sum>max&&p1!=max1&&p1!=max2)
			{
				max=p1->sum;
				max3=p1;
			}
			p1=p1->next;
		}
		printf("%d %d\n",max3->num,max3->sum);
	}


		/*if(n<3)      
		{
			int max=0;                //???????????????????????????p=a?????????...
			if(*/
