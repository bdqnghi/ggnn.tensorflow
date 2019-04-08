int n=1;
struct student
{char num[20];
char name[20];
char sex;
int age;
char score[10];
char ad[20];
struct student *next;
};
struct student* appendnewnode(void)
{
	struct student *newnode,*thisnode;
	int x;
    do{
		newnode=(struct student*)malloc(sizeof(struct student));
		scanf("%s",newnode->num);
		getchar();
		x=strcmp(newnode->num,"end");
		if(x!=0){
			scanf("%s %c %d %s %s",newnode->name ,&newnode->sex ,&newnode->age ,newnode->score ,newnode->ad);
		if(n==1)
		{
			newnode->next =0;
		}
		else
		{
			newnode->next =thisnode;
		}
		thisnode=newnode;
		n++;
		}
	}while(x!=0);
	return(thisnode);
}
void main()
{
	struct student *p,*head;
	head=appendnewnode();
	p=head;
	do
	{
		printf("%s %s %c %d %s %s\n",p->num ,p->name ,p->sex ,p->age ,p->score ,p->ad);
	    p=p->next ;
	}while(p!=NULL);
}
