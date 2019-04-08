struct stu
{
	char infor[50];
	struct stu*previous;
};

void main()
{
	struct stu*p,*q,*head;
	p=(struct stu*)malloc(sizeof(struct stu));
	p->previous=NULL;
	gets(p->infor);
	while(strcmp(p->infor,"end")!=0)
	{
		q=(struct stu*)malloc(sizeof(struct stu));
		q->previous=p;
		p=q;
        gets(p->infor);
	}
	head=p->previous;
	for(p=head;p!=NULL;p=p->previous)
		puts(p->infor);
}