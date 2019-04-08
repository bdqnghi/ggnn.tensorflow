void main()
{
	struct book
	{
		int num;
		char wri[26];
		struct book *next;
	};
	int n,m,i;
	scanf("%d",&m);
	struct book *head,*p1,*p2;
	n=0;
	p1=p2=(struct book *)malloc(L);
	scanf("%d%s",&p1->num,p1->wri);
	head=NULL;
	for(i=0;i<m-1;i++)
	{
		n=n+1;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(L);
		scanf("%d%s",&p1->num,p1->wri);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	int a[26]={0},b,j,k,max1=0,max2;
	struct book *g;
	g=head;
	do
	{
		for(i=0;i<26;i++)
		{
			if(g->wri[i]!='\0')
			{
				b=g->wri[i];
				a[b-65]=a[b-65]+1;
			}
		}
		g=g->next;
	}while(g!=NULL);
	for(i=0;i<26;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
			max2=i;
		}
	}
	max2=max2+65;
	printf("%c\n%d",max2,max1);
	g=head;
	do
	{
		for(i=0;i<26;i++)
		{
			if(g->wri[i]==max2)
			{
				printf("\n%d",g->num);
				break;
			}
		}
		
		g=g->next;
	}while(g!=NULL);
}