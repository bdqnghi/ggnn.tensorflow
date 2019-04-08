struct a
{
	int number;
	char authors[26];
	struct a*next;
};
int n,max=0;
int main()
{
	struct a*create(void);
	char sum(struct a*);
	void pr(char x,struct a*head);
	struct a*head;
	char x;
	scanf("%d",&n);
	head=create();
	x=sum(head);
	pr(x,head);
}
struct a*create(void)
{
	struct a*head,*p1,*p2;
	int i;
	p1=len;head=p1;p2=p1;
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&p1->number,p1->authors);
		if(i!=n-1)
		{p1=len;p2->next=p1;p2=p2->next;}
		else p1->next=null;
	}
	return head;
}
char sum(struct a*head)
{
	struct a*p;
	p=head;
	int a[26]={0},i,j;
	char zd;
	for(i=0;i<n;i++)
	{
		for(j=0;*(p->authors+j)!='\0';j++)
			a[*(p->authors+j)-65]++;
		p=p->next;
	}
	for(i=0;i<26;i++)
		if(a[i]>max){max=a[i];zd=i;}
	printf("%c\n%d",zd+65,a[zd]);
	return(zd+65);
}
void pr(char x,struct a*head)
{
	int i,j,num;
	struct a*p;
	p=head;
	for(i=0;i<n;i++)
	{
		num=0;
		for(j=0;*(p->authors+j)!='\0';j++)
			if(*(p->authors+j)==x)num=1;
		if(num)printf("\n%d",p->number);
		p=p->next;
	}
}