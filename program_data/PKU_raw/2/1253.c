
struct book
{
	int num;
	char name[100];
	struct book *next;
};

struct book *creat(int n)
{
	int k=1;
	struct book *head,*p1,*p2,*p;
	p1=(struct book *)malloc(sizeof(struct book));
	head=p1;p2=p1;p=p1;
	scanf("%d %s",&p1->num,p1->name);
	p1->next=NULL;
	do
	{
		p1=(struct book *)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->name);
		p2->next=p1;
		p2=p1;
		p1->next=NULL;
		k++;
	}while(k<n);
	return head;
}

int main(void)
{
	struct book *head,*p;
	char *q;
	int *s;
	int n,i,j,max=0;
	s=(int *)malloc(26*sizeof(int));
	for(i=0;i<26;i++)
		*(s+i)=0;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	while(p)
	{
		q=p->name;
		while(*q!='\0')
		{   *(s+*(q)-'A')+=1;q++;}
		p=p->next;
	}
	max=0;
	for(i=0;i<26;i++)
	    if(*(s+i)>max)
			max=*(s+i);
	for(i=0;i<26;i++)
	    if(*(s+i)==max) break;
	printf("%c\n%d\n",'A'+i,max);
	p=head;
	while(p)
	{
		q=p->name;
		if(strchr(q,'A'+i)!=NULL)
			printf("%d\n",p->num);
		p=p->next;
	}
}
			

