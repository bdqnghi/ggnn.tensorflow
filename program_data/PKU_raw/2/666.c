void main()
{
	struct s
	{
		int a;
		char b[100];
		struct s *next;
	};
	struct s *p1,*p2,*head;
	int m,n,i,j,k,t,d[50],max;
	char c;
	scanf("%d",&n);
	p1=(struct s *)malloc(sizeof(struct s));
	p2=p1;
	head=p1;
	scanf("%d %s",&p1->a,p1->b);
	for(i=0;i<n-1;i++)
	{
		p1=(struct s *)malloc(sizeof(struct s));
		p2->next=p1;
		p2=p1;
		scanf("%d %s",&p1->a,p1->b);
	}
	p2->next=0;
	t=0;
	p1=p2=head;
	
	for(c='A';c<='Z';c++)
	{
		k=0;
		for(i=0;i<n;i++)
		{
			j=0;
			while(p1->b[j]!='\0')
			{
				if(c==p1->b[j])
					k++;
				j++;
			}
			p1=p1->next;
		
		}
		
		d[t]=k;
		
		t++;
		p1=head;
	}
	j=0;
	max=d[0];
	for(i=1;i<26;i++)
		if(d[i]>max)
		{
			max=d[i];
			j=i;
		}
	printf("%c\n",'A'+j);
	printf("%d\n",max);
	t='A'+j;
for(i=0;i<n;i++)
		{
			j=0;
			while(p1->b[j]!='\0')
			{
				if(t==p1->b[j])
					printf("%d\n",p1->a);
				j++;
			}
			p1=p1->next;
		
		}

}