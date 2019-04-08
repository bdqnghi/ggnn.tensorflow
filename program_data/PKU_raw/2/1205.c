struct book
{
	int num;
	char zz[32];
    struct book *next;
};
struct book *creat(int n)
{
	struct book *head,*p1,*p2;
	int i;
	p1=p2=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->zz);
	head=NULL;
	for(i=0;i<n-1;i++)
	{
		if(i==0) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->zz);
	}
	p2->next=p1;
	p1->next=NULL;
	return (head);
}
void search(struct book *head,int n)
{
	int *p[26],i,j;
	struct book *q=head;
	for(i=0;i<26;i++)
	{
		p[i]=(int *)malloc(sizeof(int));
		*p[i]=0;
	}
    for(i=0;i<n;i++)
	{
		for(j=0;(q->zz)[j]!='\0';j++)
		{
			(*p[(q->zz)[j]-'A'])++;
		}
		q=q->next;
	}
	q=head;
	int max=*p[0],k=0;
	for(i=1;i<26;i++)
	{if(*p[i]>max){max=*p[i];k=i;}}
	printf("%c\n%d",'A'+k,max);
	for(i=0;i<n;i++)
	{
		for(j=0;(q->zz)[j]!='\0';j++)
		{
			if((q->zz)[j]=='A'+k)
				printf("\n%d",q->num);
		}
		q=q->next;
	}
}



void main()
{
	int n;
	scanf("%d",&n);
	struct book *head;
	head=creat(n);
	search(head,n);
}