struct book{
	int name;
	char writer[100];
	struct book *next;
};

int a[26];

struct book *creat(int n)
{
	struct book *p1,*p2,*xhead;
	p1=(struct book*)malloc(len);
	scanf("%d %s",&p1->name,p1->writer);
	p2=p1;
	xhead=p1;

	while(n-1)
	{
		n--;
		p1=(struct book *)malloc(len);
		scanf("%d %s",&p1->name,p1->writer);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return xhead;
}


void find(struct book*head)
{
	struct book *p;
	int i;
	char s[100];
	p=head;
	while(p)
	{
		i=0;
		strcpy(s,p->writer);
		while(s[i]!='\0')
		{a[s[i]-'A']++;
		    i++;
		}

		p=p->next;
	}
}
		

void print(struct book *head,int max)
{
	struct book *p;
	p=head;
	while(p)
	{
		if(strchr(p->writer,max+'A')) printf("%d\n",p->name);
		p=p->next;
	}
}
	



void main()
{
	int i,max=0,n;
	struct book *head;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	head=creat(n);
	find (head);
	for(i=0;i<26;i++)
		if(a[i]>a[max]) max=i;
	printf("%c\n",max+'A');
	printf("%d\n",a[max]);
	print(head,max);
}
