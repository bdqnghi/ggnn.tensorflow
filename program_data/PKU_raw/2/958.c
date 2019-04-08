struct book
{
	int num;
	char writer[30];
	struct book *next;
};
int n;
struct book *creat(void)
{
	struct book *head;
	struct book *p1,*p2;
	int m=0;
	p1=p2=(struct book*)malloc(len);
	scanf("%d %s",&p1->num,p1->writer);
	head=NULL;
	while(m<n-1)
	{
		m++;
		if(m==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book*)malloc(len);
		scanf("%d %s",&p1->num,p1->writer);
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	return (head);
}
void main()
{   
	scanf("%d",&n);
	struct book * head,*p1;
	head=creat();
	struct book *p;
	p=head;
	int i;
	int sum[27];
	memset(sum,0,sizeof(sum));
	char m;
    for(p=head;p!=NULL;p=p->next)
	{int x;
		for(i=0;i<strlen(p->writer);i++)
		{
			x=p->writer[i]-'A';
			sum[x]++;
		}
	}
	int max=sum[0];
	for(i=0;i<27;i++)
	{
		if(max<sum[i]) max=sum[i];
	}
	for(i=0;i<27;i++)
	{
		if(sum[i]==max) {printf("%c\n%d\n",'A'+i,sum[i]);m='A'+i;}
	}
	for(p=head;p!=NULL;p=p->next)
	{
		for(i=0;i<strlen(p->writer);i++)
		{
			if(p->writer[i]==m) {printf("%d\n",p->num);break;}
		}
	}

	



		






}