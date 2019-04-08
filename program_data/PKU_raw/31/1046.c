
struct node{
	char str[MAX];
	struct node *next;
}*head;

void main()
{
	struct node *p1,*p2,*p;
	p1=p2=(struct node *)malloc(LEN);
	gets(p1->str);
	p1->next=0;
	while(strcmp( p1->str , "end" )!=0){
		p1=(struct node *)malloc(LEN);
		gets(p1->str);
		p1->next=p2;
		head=p2;
		p2=p1;
	}

	p=head;
	while(p!=0){
		puts(p->str);
		p=p->next;
	}
}
