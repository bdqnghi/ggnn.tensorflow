	struct Student
	{
		char ID[10];
		char name[20];
		char sex;
		int age;
		float score[20];
		char add[20];
		struct Student*next;
	};
	int main()
	{
		struct Student a[1000],*head,*p;
	int i,j;
	for(i=0;;i++)
	{
		scanf("%s %s %c %d %s %s",a[i].ID,a[i].name,&a[i].sex,&a[i].age,a[i].score,a[i].add);
         if(a[i].ID[2]=='d')
		 {
			 printf("\n");
			 break;
		 }
	}
	for(j=i-1;j>=0;j--)
	{
		head=&a[i-1];
		a[j].next=&a[j-1];
		a[0].next=NULL;
		p=head;
	}
	do
	{
		printf("%s %s %c %d %s %s\n",p->ID,p->name,p->sex,p->age,p->score,p->add);
		p=p->next;
	}while(p!=NULL);
	return 0;
	}
