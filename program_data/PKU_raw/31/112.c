struct aa
	{
		char data[100];
		struct aa* next;
	};
void print(struct aa* p)
{
	if (p->next!=NULL) print(p->next);
	cout <<p->data<<endl;
}
int main()
{
	
	struct aa *head,*p,*q;
	int si=sizeof(struct aa);
	head=(struct aa*)malloc(si);
	p=head;q=head;
	char s[100];
	while (cin.getline(s,100))
		if (strcmp(s,"end"))
		{
			q=(struct aa*)malloc(si);
			p->next=q;
			strcpy(q->data,s);
			q->next=NULL;
			p=q;
		}
		else break;
	print(head->next);
	return 0;
}
				





