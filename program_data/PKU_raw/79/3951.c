
struct node
{
	int data;
	struct node *next;
};

int choose(int n, int m)
{
	int i=2;
	struct node *head;
	struct node *p1, *p2;
	head=(struct node*)malloc(len);	
	head->data = 1;	
	p1 = head;
	for(i=2; i<=n; i++)
	{	
			p2 = (struct node*)malloc(len);	
			p2->data = i;		
			p1->next = p2;	
			p1 = p2;	
	}
	p1->next = head;
	i=1;

	while(head->next != head)
	{
		for(i=1; i<m; i++)
		{
			p1 = head;
			head = head->next;
		}
		p1->next = head->next;
		head = head->next;
	}
	return(head->data);
}

int main()
{
	int n=1, m=1, result;
	while(n!=0 && m != 0)
	{
		scanf("%d%d", &n, &m);
		if(n==0 && m==0)
			break;
		printf("%d\n", choose(n, m));
	}
	return 0;
}
