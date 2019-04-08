/*?? ?? ?? ?? ?? ??*/
struct student
{
	struct student *pre;
	char num[100];
	char name[20];
	char sex[2];
	char age[10];
	char score[10];
	char ad[100];
	struct student *next;
};
void main()
{
	int n=0;
	struct student *end,*p1,*p2,*p;
	p1=(struct student *)malloc(LEN);
	scanf("%s",p1->num);
	while(strcmp(p1->num,"end")!=0)
	{
		scanf("%s %s %s %s %s",p1->name,p1->sex,p1->age,p1->score,p1->ad);
		n=n+1;
		if(n==1) 
		{
			p1->pre=NULL;
			p2=p1;
		}
		else
			p1->pre=p2;
			p2=p1;
			p1=(struct student *)malloc(LEN);
			scanf("%s",p1->num);
	}
	p=p2;
	do
	{
		printf("%s %s %s %s %s %s\n",p->num,p->name,p->sex,p->age,p->score,p->ad);
		p=p->pre;
	}while(p!=NULL);

}
