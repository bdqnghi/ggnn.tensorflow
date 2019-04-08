void main()
{
	struct li
	{
		char num[20],k[1000];
		struct li *next,*up;
	}*head,*p;
	head=(struct li *)malloc(sizeof(struct li));
	p=head;
	for(;;)
	{
		scanf("%s",p->num);
		if(p->num[0]=='e')
			break;
		gets(p->k);
		p->next=(struct li *)malloc(sizeof(struct li));
		(p->next)->up=p;
		p=p->next;
	}
	p=p->up;
	while(p!=head)
	{
		printf("%s%s\n",p->num,p->k);
		p=p->up;
	}
	printf("%s%s\n",head->num,head->k);

}
