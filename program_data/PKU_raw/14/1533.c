void main()
{
	struct stu
	{
		int  num;
		int chinese;
		int math;
		int sum;
		struct stu*next;
	};
	int n,max,i;
	struct stu *p1,*p2,*head,*maxsum;
	scanf("%d",&n);
	p1=p2=(struct stu*)malloc(LEN);
	scanf("%d %d %d",&p1->num,&p1->chinese,&p1->math);
	for(i=1;i<n;i++)
	{
		if(i==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct stu*)malloc(LEN);
		scanf("%d %d %d",&p1->num,&p1->chinese,&p1->math);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	
	p1=head;
	while(p1->next!=NULL)
	{
		p1->sum=p1->chinese+p1->math;
		p1=p1->next;
	}
	p1->sum=p1->chinese+p1->math;
	for(i=1;i<=3;i++)
	{
		p1=head;
	    max=p1->sum;
		maxsum=p1;
	    while(p1->next!=NULL)
		{
		  if(p1->sum>max)
		  {
			maxsum=p1;
			max=p1->sum;
		  }
		  p1=p1->next;
		  
		}
		if(p1->sum>max)
		  {
			maxsum=p1;
			max=p1->sum;
		  }
	  printf("%d %d\n",maxsum->num,maxsum->sum);
	  maxsum->sum=0;
	}
}
	



