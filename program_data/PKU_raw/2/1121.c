struct book
{
	char writer[26];
	int num;
	struct book *next;
};
struct book *creat()
{
	struct book *head,*p1,*p2;
	int i,m;
	scanf("%d",&m);
	p1=p2=(struct book *)malloc(sizeof(struct book));
	head=NULL;
	for(i=0;i<m;i++)
	{
		if(i==0) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->writer);
		p1->next=NULL;
	}
	p2->next=p1;
	return(head);
}
void main()
{
	int n,a[26][1000]={0},b[26]={0},i,max,k;
	struct book *head,*p;
	char *q;
	head=creat();
	for(p=head->next;p;p=p->next)
	{
		n=strlen(p->writer);
		for(i=0,q=p->writer;i<n;i++,q++)
		{
			a[*q-65][b[*q-65]]=p->num;
			b[*q-65]++;
		}
	}
	max=b[0];
	k=0;
	for(i=0;i<26;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			k=i;
		}
	}
	printf("%c\n%d\n",k+65,max);
	for(i=0;i<max;i++)
		printf("%d\n",a[k][i]);
}