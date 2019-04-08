struct student
{
	char num[10];
	char name[20];
	char sex;
	int age;
	char score[20];
	char address[50];
    struct student *next;
};
void main()
{
	struct student *p,*head,*q;
	p=(struct student*)calloc(1000,sizeof(struct student));
	int i,k;
	for(i=0;;i++)
	{
		scanf("%s",p[i].num);
        if(p[i].num[0]=='e')
			break;
		scanf("%s %c %d %s %s",p[i].name,&p[i].sex,&p[i].age,p[i].score,p[i].address);
	}
    k=i-1;
	head=&p[k];
	for(i=k;i>=1;i--)
		p[i].next=&p[i-1];
	p[0].next=NULL;
	q=head;
	do
	{
		printf("%s %s %c %d %s %s\n",q->num,q->name,q->sex,q->age,q->score,q->address);
		q=q->next;
	}
	while(q!=NULL);
}
