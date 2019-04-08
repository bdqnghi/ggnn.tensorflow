
int m,n;
struct student
{
	int id;
    char name[100];
	struct student* next;
};
struct student *creat()
{
	int i=1;
	struct student *head,*p1,*p2;
	p1=p2=(struct student*)malloc(len);
	scanf("%d",&m);
	scanf("%d %s",&p1->id,p1->name);
	head=NULL;
	for(;i<m;i++)
	{
		if(i==1) head=p1;
		p1=(struct student*)malloc(len);
		scanf("%d %s",&p1->id,p1->name);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	return(head);
}

void main()
{
	struct student *head,*p1;
	int num[30]={0},max,j;
	char i,auth;
	head=creat();

	for(p1=head;p1!=NULL;p1=p1->next)
	{
		for(i='A';i<='Z';i++)
		{
			for(j=0;j<strlen(p1->name);j++)
				if(p1->name[j]==i)
				num[i-'A']++;
		}
	}
	for(i=0,max=0;i<26;i++)
	{
		if(num[i]>max) 
		{
			max=num[i];
			auth=i+'A';
		}
	}
	printf("%c\n",auth);
	printf("%d\n",max);
	for(p1=head;p1!=NULL;p1=p1->next)
	{
		for(j=0;j<strlen(p1->name);j++)
			if(p1->name[j]==auth)
			printf("%d\n",p1->id);
	}
}


