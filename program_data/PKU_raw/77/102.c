struct ch
{
	int k;
	char a;
	struct ch *next;
};
void main()
{
	int i,j,t=0,n=0,N,z[50][2],temp;
	char boy,girl;
	struct ch *p1,*p2,*p3,*head;
	p1=p2=(struct ch *)malloc(LEN);
	boy=p1->a=getchar();
	p1->k=0;
	head=NULL;
	for (i=0;;i++)
	{
		n=n+1;
		if (n==1)
			head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct ch *)malloc(LEN);
		p1->a=getchar();
		p1->k=n;
		if (p1->a!='\n' && p1->a!=boy)
			girl=p1->a;
		if (p1->a=='\n')
		{
			N=n=n-1;
			break;
		}
	}
	p2->next=NULL;
	while (n>1)
	{
		p1=p2=head,p3=p2->next;
		while (p3!=NULL)
		{
			if (p2->a==boy && p3->a==girl)
			{
				if (p2==head)
				{
					z[t][0]=p2->k,z[t][1]=p3->k,t=t+1;
					if (p3->next!=NULL)
						head=(head->next)->next,p1=p2=head,p3=p2->next;
					else
						head=NULL;
					n=n-2;
				}
				else
				{
					z[t][0]=p2->k,z[t][1]=p3->k,t=t+1;
					if (p3->next!=NULL)
						p1->next=p3->next,p2=p3->next,p3=p2->next;
					else
						p1->next=NULL;
					n=n-2;
				}
			}
			else
				p1=p2,p2=p2->next,p3=p2->next;
		}
	}
	for (j=0;j<t;j++)
	{
		for (i=0;i<t-j-1;i++)
		{
			if (z[i][1]>z[i+1][1])
			{
				temp=z[i][0],z[i][0]=z[i+1][0],z[i+1][0]=temp;
				temp=z[i][1],z[i][1]=z[i+1][1],z[i+1][1]=temp;
			}
		}
	}
	for (i=0;i<t;i++)
		printf ("%d %d\n",z[i][0],z[i][1]);
	printf ("0 %d\n",N);
}