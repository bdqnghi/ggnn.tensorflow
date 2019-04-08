struct worker
{
	int nm;
	char name1[26];
	struct worker *next;
};
struct zuozhe
{
	char nam;
	int counts;
	int  name[1000];
	struct zuozhe *next;
};
struct worker *creat1(int n)
{
	struct worker *head,*p1,*p2;
	int i;
	head=(struct worker *)malloc(sizeof(struct worker));
	p1=p2=head;
	for(i=0;i<n;i++)
	{
		p2=p1;
		p1=(struct worker *)malloc(sizeof(struct worker));
		scanf("%d %s",&p2->nm,p2->name1);
		p2->next=p1;
	}
	p2->next=0;
	return head;
}
struct zuozhe *creat2()
{
	struct zuozhe *head,*p1,*p2;
	int i;
	head=(struct zuozhe *)malloc(sizeof(struct zuozhe));
	p1=p2=head;
	for(i=0;i<26;i++)
	{
		p2=p1;
		p1=(struct zuozhe *)malloc(sizeof(struct zuozhe));
		p2->counts=0;
		p2->nam='A'+i;
		p2->next=p1;
	}
	p2->next=0;
	return head;
}
void main()
{
	int big=0;
	char zz;
	int i,j;
	char c;
	int m,n;
	int a[26]={0};
	struct worker *head1,*p1,*p2;
	struct zuozhe *head2,*q1,*q2;
	scanf("%d",&n);
	head1=creat1(n);
	p1=p2=head1;
	head2=creat2();
	q1=q2=head2;
	while(p1!=0)
	{
		i=0;
		while(p1->name1[i]!='\0')
		{
			q1=head2;
			while(1)
			{
				if(q1->nam==p1->name1[i])
				{
					q1->name[q1->counts]=p1->nm;
					q1->counts++;
					i++;
					break;
				}
				q1=q1->next;
			}
		}
		p1=p1->next;
	}
	q1=head2;
	while(q1!=0)
	{
		if(q1->counts>big)
		{
			zz=q1->nam;
			big=q1->counts;
		}
		q1=q1->next;
	}
	q1=head2;
	while(1)
	{
		if(q1->nam==zz)
		{
			printf("%c\n%d\n",q1->nam,q1->counts);
			for(i=0;i<q1->counts;i++)
			{
				printf("%d\n",q1->name[i]);
			}
			break;
		}
		q1=q1->next;
	}
}

		
