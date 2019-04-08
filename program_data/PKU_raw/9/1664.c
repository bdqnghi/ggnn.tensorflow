struct bingren
{
	char id[20];
	int nian;
	struct bingren *next;
};
int main()
{
	int n,i;
	struct bingren *p1,*head;
	struct bingren temp;
	char a[20]={'\0'};
	int b=0;
	scanf("%d",&n);
	head=(struct bingren *)malloc(sizeof(struct bingren));
	head->next=NULL;
	scanf("%s%d",head->id,&head->nian);
	p1=head;
	for(i=1;i<n;i++)
	{
		p1->next=(struct bingren *)malloc(sizeof(struct bingren));
		scanf("%s%d",p1->next->id,&p1->next->nian);
		p1->next->next=NULL;
		p1=p1->next;
	}
	p1=head;
	for(i=1;i<n;i++)
	{
		for(;p1->next!=NULL;)
		{
			if(p1->next->nian >= 60 && p1->next->nian > p1->nian )
			{
				b=p1->nian;
				p1->nian=p1->next->nian;
				p1->next->nian=b;
				strcpy(a,p1->id);
				strcpy(p1->id,p1->next->id);
				strcpy(p1->next->id,a);
			}
			p1=p1->next;
		}
		p1=head;
	}
	p1=head;
	for(;p1!=NULL;)
	{
		printf("%s\n",p1->id);
		p1=p1->next;
	}
}











