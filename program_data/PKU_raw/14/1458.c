void main()
{
	int i,n,j,max;                                              
	scanf("%d",&n);
	struct student
	{
		int num;
		int yuwen;
		int shuxue;
		struct student * next;
	};
	struct student *head,*ppre,*p0,*p3;
	struct student *p1,*p2;
	head=p1=p2=(struct student *)malloc(sizeof(struct student));
	for(i=0;i<n;i++)
	{
	     scanf("%d %d %d",&p1->num,&p1->yuwen,&p1->shuxue);
	    p1=(struct student *)malloc(sizeof(struct student));
	    p2->next=p1;
	    p2=p1;
	}
	p2->next=NULL;           /*????*/
    
	for(j=0;j<3;j++)
	{
		ppre=p1=head;
	    max=p1->yuwen+p1->shuxue;
	    p1=p1->next;
	for(i=0;i<n-j;i++)
	{
           if((p1->yuwen+p1->shuxue)>max)
		   {
			   max=p1->yuwen+p1->shuxue;
			   p0=p1;
			   p3=ppre;
		   }
		   ppre=p1;
	       p1=p1->next;
	}
	printf("%d %d\n",p0->num,max);
	     p3->next=p0->next;
	}
}
