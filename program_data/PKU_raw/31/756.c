struct Student
{
	char id[200];
	char name[200];
	char sex[1];
	int age;
	float mark;
	char address[200];
	struct Student *next;
};
int main()
{
	struct Student *p, *head, *tail;
	head = tail = NULL;
	while(1)
	{
		p = (struct Student *) malloc(LEN);
		scanf("%s", p->id);
		if(p->id[0] == 'e')
			break;
		scanf("%s", p->name);
		scanf("%s", p->sex);
		scanf("%d%f%s", &p->age, &p->mark, p->address);
		p->next = NULL;
		if(head == NULL)
			head = tail = p;
		else
		{
			p->next = head;
			head = p;
		}
	}
	p = head;
	while(p != NULL)
	{
		printf("%s ", p->id);
		printf("%s ", p->name);
		printf("%s ", p->sex);
		printf("%d %g ", p->age, p->mark);
		printf("%s\n", p->address);
		p = p->next;
	}
	return 0;
}