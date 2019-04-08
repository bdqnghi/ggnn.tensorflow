struct num
{
	int a;
	struct num * next;
};
int main()
{
	int n,k,i,t=0;
	struct num * head,* p1,* p2;
	p1=p2=( struct num * ) malloc(LEN);
	head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
	  scanf("%d",&p1->a);
      if (i==0)head=p1;
	  else p2->next=p1;
	  p2=p1;
	  p1=( struct num * ) malloc(LEN);
	}
	p2->next=NULL;
	scanf("%d",&k);
	p1=head;
    p2=p1;
	for(i=0;i<n;i++)
	{
		if(p1->a!=k)
		{   
			p2=p1;
			p1=p1->next;
        }
		else 
		{
			if(p1==head)
			{
				head=p1->next;
			    p1=p1->next;
				p2=p1;
			}
			else
			{
				p2->next=p1->next;
				p1=p1->next;
			}
		}
	}
	p1=head;
	while(p1!=NULL)
	{
		if(t==0)
		{
			printf("%d",p1->a);
			t=1;
		}
		else printf(" %d",p1->a);
		p1=p1->next;
	}
    return 0;
}

  