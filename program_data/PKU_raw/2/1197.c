int max,n,x,b[30]={0};
struct book
{
	int num;
	char author[30];
	struct book*next;
};

struct book*creat()
{
	struct book*head,*p1,*p2;
	p2=NULL;
	head=(struct book*)malloc(len);
	p1=head;
	while(n>0)
	{
		char a[30];int i,j;
		p2=p1;
		x=0;
		scanf("%d%s",&p1->num,&p1->author);
		strcpy(a,p1->author);
		max=b[0];
		for(i=0;a[i]!='\0';i++)
		{
			for(j='A';j<='Z';j++)
			{
				if(j==a[i])
				b[j]++;
			}
		}
		for(j='A';j<='Z';j++)
		{
			if(b[j]>max)
			{
				max=b[j];
				x=j;
			}
		}
		p1=(struct book*)malloc(len);
		p2->next=p1;
		n--;
	}
	p2->next=NULL;
	printf("%c\n%d\n",x,max);
	return head;
	
}
struct book*print(struct book*head,char x)
{
	struct book*p1;
	p1=head;
	int i;
	while(p1!=NULL)
	{
		char a[30];
		strcpy(a,p1->author);
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==x)
				printf("%d\n",p1->num);
		}
		p1=p1->next;
	}
	return head;
}
void main()
{
	scanf("%d",&n);
	struct book*head;
	head=creat();
	print(head,x);
}
	
