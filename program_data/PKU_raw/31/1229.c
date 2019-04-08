
struct stu
{
	struct stu *back;
	char info[number];
	struct stu *next;
}
main()
{
	char infos[number];
	char s[]="end";
	struct stu *head,*p1,*p2,*tail;
	
	gets(infos);
	p2=(struct stu *)malloc(Len);
	if (strcmp(infos,s)!=0)
	{
		head=p2;
		p2->back=NULL;
		strcpy(p2->info,infos);
		p2->next=NULL;
		gets(infos);
		p1=p2;
	}
	while(strcmp(infos,s)!=0)
	{
		p2=(struct stu *)malloc(Len);
		p1->next=p2;
		p2->back=p1;
		strcpy(p2->info,infos);
		p2->next=NULL;
		p1=p2;
		gets(infos);
	}
	tail=p1;
	while(p1)
	{
		printf("%s\n",p1->info);
		p1=p1->back;
	}
}