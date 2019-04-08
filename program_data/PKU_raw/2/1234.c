void main()
{
	struct book
	{
		int num;
		char auth[26];
		int inf[26];
		struct book *next;
	};
	struct book *head,*p1,*p2,*t1,*t2;
	head=(struct book *)malloc(sizeof(struct book));

	int m,i,k,l,j,max;
	int authnum[26]={0};
	scanf("%d",&m);
	p1=head;
	p2=p1;
	for (i=0;i<(m-1);i++)
	{
		scanf("%d %s",&(p1->num),p1->auth);
		p2=(struct book *)malloc(sizeof(struct book));
		p1->next=p2;
		p1=p2;
	}
	scanf("%d %s",&(p1->num),p1->auth);
	p2=NULL;
	p1->next=p2;
	
	p1=head;
	p2=p1;
	while(p1!=NULL)
	{
		l=strlen(p1->auth);
		for(j=0;j<l;j++)
		{
			p1->inf[(*((p1->auth)+j))-65]=1;
			authnum[(*((p1->auth)+j))-65]++;
		}
		p2=p1->next;
		p1=p2;
	}
	max=0;
	for(i=1;i<26;i++)
	{
		if (authnum[i]>authnum[max]) max=i;
	}
	printf("%c\n",(max+65));
	printf("%d\n",authnum[max]);

	p1=head;
	p2=p1;
	while(p1!=NULL)
	{
		if ((p1->inf[max])>0)
			printf("%d\n",p1->num);
		p2=p1->next;
		p1=p2;
	}
	p1=head;
	p2=p1;
	while(p1!=NULL)
	{
		p2=p1->next;
		free(p1);
		p1=p2;
	}
}