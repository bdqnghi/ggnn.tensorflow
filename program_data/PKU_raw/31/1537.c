struct student
{
	char id[100];
	char name[100];
	char sex;
	int age;
	char score[100];
	char addr[100];
    struct student *pre,*next;
};
void main()
{
	struct student *p1,*p2,*head1,*head2;
	
	int n=0;
	char temp[100];
	head1=NULL;
	p1=p2=NULL;
	while(scanf("%s",temp),strcmp(temp,"end")!=0)
	{
		n=n+1;
		p1=(struct student *)malloc(sizeof(struct student));
		p1->pre=NULL;
		p1->next=NULL;
		
		strcpy(p1->id,temp);
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->addr);
		if(n==1)head1=p1;else {p2->next=p1;p1->pre=p2;}
		p2=p1;
	}
	
	head2=p2;
	while(p2!=NULL)
	{
		printf("%s %s %c %d %s %s\n",p2->id,p2->name,p2->sex,p2->age,p2->score,p2->addr);
		p2=p2->pre;
	}
}  