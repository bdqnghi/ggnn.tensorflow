struct book
{
	int num;
	char wr[26];
	struct book *next;
};
void main()
{
	int i,n,m=0,j,a,b,c;
	int s[100]={0};
	scanf("%d",&n);
	struct book *head,*p1,*p2,*p;
	p1=p2=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->wr);
	head=NULL;
	while(m!=n-1)
	{
		m=m+1;
		if(m==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->wr);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	p=head;
	do
	{
		b=strlen(p->wr);
		for(j=0;j<b;j++)
			s[p->wr[j]]++;
		p=p->next;
	}while(p!=NULL);

	a=s[65];
	c=65;
	for(i=66;i<91;i++)
		if(a<s[i])
		{
			a=s[i];
			c=i;
		}
	printf("%c\n%d\n",c,a);

	p=head;
	do
	{
		b=strlen(p->wr);
		for(j=0;j<b;j++)
			if(p->wr[j]==c)
				printf("%d\n",p->num);
		p=p->next;
	}while(p!=NULL);
}