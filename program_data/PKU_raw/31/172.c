
struct st
{
	char id[10000];
	struct st *next;
};

int main()
{
	struct st *head=NULL,*p=NULL,*q=NULL;
	char end;
	while (1)
	{
		p=(struct st*)malloc(sizeof(struct st));
		if(p!=NULL)
		{
			gets(p->id);
			p->next=q;
			if (p->id[0]=='e')
				break;
			else
			q=p;

		}
	}

	p=p->next;
	while(1)
	{
		puts(p->id);
		if (p->next==NULL)
			break;
		p=p->next;


	}

}		