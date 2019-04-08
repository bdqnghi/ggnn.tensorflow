struct a
{
	char num[10];
	char name[21];
	char sex;
	int age;
	float score;
	char address[12];
	struct a*next;
};
struct a*create()
{
	struct a*head,*p1;
	p1=len;p1->next=null;head=p1;strcpy(p1->num,"pp");
	while(strcmp(p1->num,"end"))
	{
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")!=0)
		{
		scanf("%s %c %d %f %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
		p1=len;
		p1->next=head;
		head=p1;
		strcpy(p1->num,"pp");}
	}
	head=p1->next;
	return head;
}
void print(struct a*head)
{
	struct a*p1;
	p1=head;
	do
	{
		printf("%s %s %c %d %g %s",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
		if(p1->next!=null)printf("\n");
		p1=p1->next;
	}while(p1);
}
int main()
{
	struct a*create();
	struct a*head;
	void print(struct a*head);
	head=create();
	print(head);
}