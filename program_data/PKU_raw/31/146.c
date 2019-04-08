
struct student
{
char all[100];
struct student *next;
};


struct student *creat(void)
{
struct student *head;
struct student *p,*q;
int t=0;
	
head=(struct student*) malloc (sizeof (struct student));
gets(head->all);
q=head;
head->next=NULL;

do 
{
	if(t>0)
		{
		p->next=q;
		q=p;
		}

p=(struct student*) malloc (sizeof (struct student));
gets(p->all);
t++;
}while(strcmp(p->all,"end")!=0);

return(q);

}

void print(struct student *head)
{
struct student *p;
p=head;

do 
{
printf("%s\n",p->all);
p=p->next;
}while (p!=NULL);

}

void main()
{
struct student *headnew;

headnew=creat();

print(headnew);

}
