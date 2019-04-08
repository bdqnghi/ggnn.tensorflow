struct student
{
	char num[100];
	char name[100];
	char sex;
	int age;
	char score[20];
	char address[100];
	struct student *next;
};
struct student *creat()
{
	struct student *head,*p1,*p2;
	p1 = (struct student*)malloc(len);
    p2 = p1;
	scanf("%s",p1->num);
    if(strcmp(p1->num,"end") == 0)
	{head = p1;p1->next = NULL;}
	else
	{
	scanf(wtf);
	p1->next = NULL;
	for (;;)
	{
      p1 = (struct student*)malloc(len);
	  scanf("%s",p1->num);
	  if(strcmp(p1->num,"end") == 0)
		  break;
	  scanf(wtf);
	  p1->next = p2;
	  p2 = p1;
	}
	head = p2;
	}
	return(head);
}
main()
{
	struct student *p;
	p = creat();
	if (p->next == NULL)
		printf("\n");
	else
	{
	for(;p!=NULL;)
	{
		printf(wtf2);
		p = p->next;
	}
	}
}