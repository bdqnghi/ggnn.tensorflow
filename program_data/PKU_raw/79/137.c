struct monkey
{
	int num;
	struct monkey *next;
}monkey[300];
void main()
{
	struct monkey *head,*p,*q;
	int n,i,m,j,k;
	for(i=0;i<300;i++)
		monkey[i].num=i+1;
	for(j=0;;j++)
	{
	    scanf("%d %d",&n,&m);
		if(n==0&&m==0)
			break;
	    head=&monkey[0];
	    for(i=0;i<n-1;i++)
		{
		    monkey[i].next=&monkey[i+1];
		} 
    	monkey[n-1].next=&monkey[0];
    	p=head;
		if(m!=1)
		{
			while(p!=p->next)
			{ 
			    for(k=0;k<m-2;k++)
				{ 
				    p=p->next;
				} 
	            q=p->next;
	            p->next=q->next;
			    p=q->next;
			}
			printf("%d\n",p->num);
		}
		if(m==1)
		{
			printf("%d\n",monkey[n-1].num);
		}
	}
}
