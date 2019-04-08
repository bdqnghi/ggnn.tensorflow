struct jiegou
{
	int a;
	struct jiegou *next;
};
void main()
{
	struct jiegou *p1,*p2,*head,*p;
	int n,m;
    int i;
    int count=1;
	while(1)
	{
        scanf("%d%d",&n,&m);
		if(n==0)
			break;
		p1=(struct jiegou *)malloc(sizeof(struct jiegou));
        for(i=0;i<n;i++)
		{
			if(i==0)
              head=p1,p2=p1,p1->a=1;
			else
			{
				p1=(struct jiegou *)malloc(sizeof(struct jiegou));
				p1->a=i+1;
				p2->next=p1;
				p2=p1;
			}
		}
		p2->next=head;
        
        p=head;
		while(head->next!=head)
		{
		if(m!=1)
		{
			count++;
			if(count==m)
		   {
			   if(p->next!=head)
                 p->next=(p->next)->next;

			   else
			   {
				    p->next=(p->next)->next;
					head=p;
			   }
			 count=1;
			 
		   }
		   
           p=p->next;
		}
		else
		{
			printf("%d\n",n);
			break;
		}
		     
		   
		}
		if(m!=1)
		printf("%d\n",head->a);
	}

}
