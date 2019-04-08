struct student
{
	char num[20];
	char name[20];
	char sex[5];
	char age[5];
	char score[10];
	char address[20];
	struct student *next;
};
int main()
{
	struct student *head,*p1,*p2,*end;
	char c;
	int i1,n1;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	scanf("%s%s%s%s%s",&p1->num,&p1->name,&p1->sex,&p1->age,&p1->score);
	i1=0;
	while((c=getchar())!='\n')
	{
		p1->address[i1]=c;
		i1++;
	}
	for(;i1<=19;i1++)
		p1->address[i1]='\0';
	head=p1;
	n1=0;
	while(p1->num[0]!='e')
	{
		n1=n1+1;
		p2=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%s",&p1->num);
		if(p1->num[0]=='e') break;
		scanf("%s%s%s%s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->score);
		i1=0;
		while((c=getchar())!='\n')
		{
			p1->address[i1]=c;
			i1++;
		}
		for(;i1<=19;i1++)
			p1->address[i1]='\0';
		if(n1==1) p1->next=head;
		else p1->next=p2;
	}
	end=p2;//input

	p1=end;
	i1=0;
	while(p1!=head)
	{
		printf("%s %s %s %s %s%s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
		p1=p1->next;
	}
	printf("%s %s %s %s %s%s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);

}