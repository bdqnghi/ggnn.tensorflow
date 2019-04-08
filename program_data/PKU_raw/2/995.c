struct book
{
	int num;
	char writer[27];
	struct book *next;
}*head;
int times[26];

void create(int m)
{
	struct book *p1,*p2;
	int i;
	for (i=0;i<=m-1;i++)
	{
		p1=(struct book *)malloc(sizeof(struct book));
		scanf("%d",&p1->num);
		scanf("%s",p1->writer);
		if (!i) head=p1;
		else p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
}
int count()
{
	int max,l,i;
	char temp[27];
	struct book *p1;
	for (i=0;i<=25;i++) times[i]=0;
	p1=head;
	while (p1!=NULL)
	{
		l=strlen(p1->writer);
		strcpy(temp,p1->writer);
		for (i=0;i<=l-1;i++)
			times[temp[i]-65]++;
		p1=p1->next;
	}
	max=0;
	for (i=0;i<=25;i++)
		if (times[i]>times[max]) max=i;
	return(max);
}
void print(int max)
{
	struct book *p1;
	int abc[999],total,l,i;
	char temp[27];

	total=0;
	printf("%c\n",max+65);
	p1=head;
	while (p1!=NULL)
	{
		strcpy(temp,p1->writer);
		l=strlen(temp);
		for (i=0;i<=l-1;i++)
			if (max+65==temp[i]) break;
		if (i<l)
		{
			abc[total]=p1->num;
			total++;
		}
		p1=p1->next;
	}
	printf("%d\n",total);
	for (i=0;i<=total-1;i++)
	{
		printf("%d\n",abc[i]);
	}
}
void main()
{
	int max,m;
	scanf("%d",&m);
	create(m);
	max=count();
	print(max);
}