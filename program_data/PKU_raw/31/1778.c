
struct student{
		struct student *pre;
		char s[100];
		struct student *next;
	};

struct student *creat()
{
	struct student *p1,*p2;
    p1=(struct student*)malloc(len);
	gets(p1->s);
	p1->pre=NULL;
	p1->next=NULL;

	p2=p1;
	while(strcmp(p1->s,"end"))
	{
	p1=(struct student*)malloc(len);
	gets(p1->s);
	p1->pre=p2;
	p2->next=p1;
	p1->next=NULL;
	p2=p1;
	}
	return(p1->pre);
}

void print(struct student *end)
{
	while(end)
	{
	puts(end->s);
	end=end->pre;
	}
}




void main()
{
	struct student *end;
	end=creat();
	print(end);
}