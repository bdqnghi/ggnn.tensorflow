int main()
{
	int i;
	struct student
	{
		char num[100];
		char name[100];
		char sex;
		int age;
		char score[100];
		char address[100];
		struct student *next;
	}a[10000],*head,*p;
	int n;
	for(i=0;i<10000;i++)
	{
		scanf("%s",a[i].num);
		if(a[i].num[0]=='e')
		{break;}
		scanf("%s %c %d %s %s",a[i].name,&a[i].sex,&a[i].age,a[i].score,a[i].address);
	}
	i=i-1;
	head=&a[i];
	for(n=i;n>0;n--)
	{
		a[n].next=&a[n-1];
	}
	a[0].next=NULL;
	p=head;
	do
	{
		printf("%s %s %c %d %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
		p=p->next;
	}while(p!=NULL);
	return 0;
}