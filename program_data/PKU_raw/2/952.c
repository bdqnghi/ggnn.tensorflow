struct book
{
    int num;
	char name[26];
	struct book *next;
};

struct book *creat(int n)
{
	int i;
	struct book *head;
	struct book *p1,*p2;
	p1=p2=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->name);
	head=NULL;
	
	for(i=0;i<n-1;i++)
	{
	
		if(i==0)head=p1;
		p1=(struct book*)malloc(sizeof(struct book));
		scanf("%d %s",&p1->num,p1->name);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return (head);
}

void main()
{
	int i,n,a[26]={0},max=0,j,k=0;
	char t;
	struct book *p,*p1;
	scanf("%d",&n);
	p=creat(n);
	p1=p;
	for(j=0;j<n;j++)
	{
		for(i=0;*(p->name+i)!='\0';i++)
			a[*(p->name+i)-65]=a[*(p->name+i)-65]+1;
        p=p->next;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]>max){max=a[i];k=i;}
	}
	printf("%c\n%d\n",(k+65),max);
	t=(char)(k+65);

	while(p1!=NULL)
	{
		for(i=0;*(p1->name+i)!='\0';i++)
		{
			if(*(p1->name+i)==t)
			{
				printf("%d\n",p1->num);
				break;
			}
		}
		p1=p1->next;
	}
}

