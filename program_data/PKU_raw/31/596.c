struct student
{
	char num[9];
	char name[20];
	char sex;
	int age;
	float grade;
	char address[20];
	struct student *next;
};
void main()
{
	int n=1,i;
	struct student *thisnode,*newnode,*p;
    for(i=1;;i++)
	{
		newnode=(struct student *)malloc(LEN);	
		scanf("%s",newnode->num);	
		if(newnode->num[0]=='e')  break;
		scanf("%s %c %d %g %s",newnode->name,&newnode->sex,&newnode->age,&newnode->grade,newnode->address);
        if(n==1)
		{
			newnode->next=NULL;
			thisnode=newnode;
		}
		else
		{
			newnode->next=thisnode;
			thisnode=newnode;
		}
		n++;

	}

    p=thisnode;
	while(p!=NULL)
	{

		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->grade,p->address);
		p=p->next;
	}

}

