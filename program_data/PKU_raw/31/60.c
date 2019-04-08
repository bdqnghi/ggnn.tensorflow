struct stu
{char num[50];
struct stu * next;
};
void main()
{
	struct stu * head,*p1,*p2;
	int i=1;
	p1=p2=(struct stu *)malloc(L);
    gets(p1->num);
	head=p1;
	while((strcmp(p1->num,"end")!=0))
	{
		p1=(struct stu*) malloc(L);
		gets(p1->num);
		p2->next=p1;
		p2=p1;i++;
	}
	p2->next=0;
	int k;
	for(;i>1;i--)
	{
		k=i;
		for(p1=head;k>2;k--)
		{p1=p1->next;}
		printf("%s\n",p1->num); 
	}
}
