int m;
struct book
{
	int num;
	char name[26];
	struct book *next;
};
struct book *create(void)
{
	struct book *head,*p1,*p2;
	int i;
	scanf("%d",&m);
	p1=(struct book *)malloc(LEN);
	scanf("%d %s",&p1->num,p1->name);
	head=NULL;
	for(i=1;i<m;i++)
	{
		if(i==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct book *)malloc(LEN);
		scanf("%d %s",&p1->num,p1->name);
	}
	p2->next=p1;
	p1->next=NULL;
	return(head);
}
void main()
{
	int num[26]={0},i,j,max=0;
	struct book *p1,*p2,*head;
	char *p;
	p1=create();
	head=p1;
	for(i=0;i<m;i++)
	{
		for(p=p1->name;*p!='\0';p++)
		{
			num[(*p)-'A']++;
		}
		p1=p1->next;
	}
	for(i=0;i<26;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
			j=i;
		}
	}
	printf("%c\n",('A'+j));
	printf("%d\n",max);
	p1=head;
	for(i=0;i<m;i++)
	{
		p=p1->name;
		for(p=p1->name;*p!='\0';p++)
		{
			if(*p==('A'+j))
			{
				printf("%d\n",p1->num);
				break;
			}
		}
		p1=p1->next;
	}
}