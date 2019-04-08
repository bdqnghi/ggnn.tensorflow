struct student
{
	int num;
	char name[20];
	struct student* next;
};
struct student*creat(int n)
	{
		struct student*p1,*p2,*head;
		int i;
		p1=p2=(struct student*)malloc(len);
		head=NULL;
		i=0;
		while(i<n)
		{
			scanf("%d %s",&p1->num, p1->name);
			i=i+1;
			if(i==1) head=p1;
			else p2->next=p1;
			p2=p1;
			p1=(struct student *)malloc(len);
		}
		p2->next=NULL;
		return head;
	}
void main()
{
	int i;
	struct student *head,*p;
	int n;
	scanf("%d",&n);
	head=creat(n);
	p=head;
	int a[26];
	for (i=0; i<26; i++)
	{
		a[i]=0;
	}
	while (p!=NULL)
	{
		for (i=0;i<20;i++)
		{
			a[(int)p->name[i]-'A']++;
		}
		p = p->next;
	}
	int number, max = 0;
	for (i=0; i<26; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			number = i;
		}
	}
	printf ("%c\n", 'A'+number);
	printf ("%d\n", max);
	p = head;
	while (p!=NULL)
	{
		for (i=0;i<20;i++)
		{
			if (p->name[i] == 'A'+number)
				break;
		}
		if (p->name[i] == 'A'+number) 
		printf ("%d\n", p->num);
		p = p->next;
	}
}


