struct student
{
	char num[1000];
	int age;
	struct student *next;
};
struct student *creat(int n)
{
	struct student *p1,*p2,*head;
	int i;
	for (i = 0;i < n;i++)
	{
		p1 = (struct student*)malloc(len);
		scanf("%s%d",p1->num,&p1->age);
		p1->next = NULL;
		if(i == 0)
		{
			p2 = p1;
			head = p1;
		}
		else
		{
			p2->next = p1;
			p2 = p1;
		}
	}
	return (head);
}
struct student *trans(struct student *head,int n)
{
	struct student *p1,*p2,*p3,*p4,*q;
	int i,j;
	for (i = 0;i<n;i++)
	{
         p1 = head;
	     p2 = p1->next;
         p3 = p2->next;
	     p4 = head;
		for(j = 0;p1->next != NULL;j++)
	{
			if(p2->age >=60)
			{
		if(p1->age < p2->age)
		{
			if(p1 == head)
			{
				p2->next = p1;
				p1->next = p3;
				head = p2;
				q = p1;
				p1 = p2;
				p2 = q;
				p4 = head;
			}
			else if(p2 ->next != NULL)
			{
				p1->next = p3;
				p2->next = p1;
				p4->next = p2;
				q = p1;
				p1 = p2;
				p2 = q;
			}
			else
			{
				p2->next = p1;
				p4 ->next = p2;
				p1->next = 0;
				q = p1;
				p1 = p2;
				p2 = q;
			}
		}
		}
            if(p1 != head)
				p4 = p4->next;
			p1 = p1->next;
			p2 = p2->next;
			if (p3 != NULL)
			    p3 = p3->next;
		}
		q = head;
	}
	return(q);
}

	print(struct student *head)
{
	struct student *p;
	p = head;
	for (;p !=NULL;p = p->next)
		printf("%s\n",p->num);
}
main()
{
	struct student *p;
	int n;
	scanf("%d",&n);
	p = creat(n);
	p = trans(p,n);
	print(p);
}
	