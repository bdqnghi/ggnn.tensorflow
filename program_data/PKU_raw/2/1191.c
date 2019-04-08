struct info
{
	int num;
	char author[30];
	struct info *next;
};
struct info*create(int n)
{
struct info *p1,*p2,*head;
int i;
p1=(struct info*)malloc(sizeof(struct info));
scanf("%d%s",&p1->num,p1->author);
p1->next=NULL;
p2=p1;
head=p1;
i=1;
while(i<n)
{
	p1=(struct info*)malloc(sizeof(struct info));
    scanf("%d%s",&p1->num,p1->author);
	p1->next=NULL;
	p2->next=p1;
	p2=p1;
	i++;
}
return head;
}



int main()
{
	int n,i,t,index,j;
	struct info *head,*p;
	int *g;
	scanf("%d",&n);
	head=create(n);
	g=(int*)malloc(26*sizeof(int));
	p=head;
    for(i=0,t=0;i<26;i++)
	{
	*(g+i)=0;
	}
	for(i=0;i<n;i++)
	{
		j=0;
		while(*(p->author+j)!='\0')
		{(*(g+(*(p->author+j))-65))++;j++;}
		p=p->next;
	}
    for(i=0,t=0;i<26;i++)
	{
	if(*(g+i)>t)
	{t=*(g+i);index=i;}
	}
    printf("%c\n",index+65);
	printf("%d\n",*(g+index));
    p=head;
	for(i=0;i<n;i++)
	{
		j=0;
		while(*(p->author+j)!='\0')
		{if(*(p->author+j)==index+65)
		{printf("%d\n",p->num);}
		j++;
		}
		p=p->next;
	}
}