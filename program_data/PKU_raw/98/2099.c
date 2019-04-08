struct word
{
	char vol[40];
	int len;
	struct word * next;
};
struct word * create(int n)
{
	struct word *p1,*p2,*head;
	int i;
	for(i=0;i<n;i++)
	{
		p1=(struct word *)malloc(sizeof(struct word));
		scanf("%s",&p1->vol);
		p1->len=strlen(p1->vol)+1;
		if(i==0)
		{
			head=p1;
			p2=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
		}
	}
	p1->next=NULL;
	return head;
}
void print(struct word * head,int n)
{
	struct word * pa;
	int count=0;
	pa=head;
	while(n)
	{
		if(count==0)
		{
			printf("%s",pa->vol);
			count+=pa->len;
			pa=pa->next;
			if(pa)
			count+=pa->len;
		}
		else if(count<=81&&count!=0)
		{
			printf(" %s",pa->vol);
			pa=pa->next;
			if(pa)
			count+=pa->len;
		}
		else if(count>81)
		{
			printf("\n%s",pa->vol);
			count=pa->len;
			pa=pa->next;
			if(pa)
			count+=pa->len;
		}
		n--;
	}
}
int main()
{
	int n;
	struct word * head;
	scanf("%d",&n);
	head=create(n);
	print(head,n);
	return 0;
}