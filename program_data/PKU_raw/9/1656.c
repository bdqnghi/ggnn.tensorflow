struct ren
{
	char id[12];
	int ye;
	struct ren *next;
};
int main()
{
	int n;
	char c[12];
	int y;
	int r;
	struct ren *p1, *p2,*head;
	int i;
	scanf("%d", &n);
	head = (struct ren *)malloc(sizeof(struct ren));
	scanf("%s %d", c, &y);
	strcpy(head->id, c);
	head->ye = y;
	head->next = 0;
	for (i = 2; i <= n; i++)
	{
		scanf("%s %d", c, &y);
		p1 = (struct ren *)malloc(sizeof(struct ren));
		strcpy(p1->id, c);
		p1->ye = y;
		p1->next = 0;
		if (y < 60)
		{
			p2 = head;
			while (p2->next != 0)
				p2 = p2->next;
			p2->next = p1;
		}
		else
		{
			p2 = head;
			if (y>p2->ye)
			{
				p1->next = head;
				head = p1;
			}
			else
			{
				r = 0;
				while (p2->next != 0)
				{
					if (p2->ye >= y&&p2->next->ye < y)
					{
						r = 1;
						p1->next = p2->next;
						p2->next = p1;
						break;
					}
					p2 = p2->next;
				}
				if (r == 0)
				{
					p2->next = p1;
				}
			}
		}
	}
	p1 = head;
	do
	{
		printf("%s\n", p1->id);
		p1 = p1->next;
	} while (p1 != 0);
}