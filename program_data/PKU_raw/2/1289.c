
int pp[26]={0};

struct st
{
	char name[27];
	int num;
	struct st *next;
};

struct st *creat(int m)
{
	struct st *head,*p1,*p2;
	int i,j;
	p1=(struct st *)malloc(sizeof(struct st));
	scanf("%d %s",&p1->num,p1->name);
	for (j=0;;j++)
	{
		if (isupper(p1->name[j])) pp[p1->name[j]-65]++;
			else break;
	}
	p2=p1;
	head=p1;
	for (i=1;i<m;i++)
	{
		p1=(struct st *)malloc(sizeof(struct st));
		scanf("%d %s",&p1->num,p1->name);
		for (j=0;;j++)
		{
			if (isupper(p1->name[j])) pp[p1->name[j]-65]++;
				else break;
		}
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return(head);
}


void main()
{
	struct st *creat();
	struct st *head,*p;
	int n,i,max,j;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	max=0;
	for (i=1;i<26;i++)
		if (pp[i]>pp[max]) max=i;
	printf("%c\n%d\n",max+65,pp[max]);
	while(p)
	{
		for (j=0;;j++)
		{
			if (isupper(p->name[j]))
			{
				if (p->name[j]==(max+65)) printf("%d\n",p->num);
			}
			else break;
		}
		p=p->next;
	}


}