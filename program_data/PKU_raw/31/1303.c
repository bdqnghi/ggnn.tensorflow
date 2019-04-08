struct student
{
	char num[20];
	char name[20];
	char sex;
	int age;
	char mark[20];
	char add[20];
	struct student *next;
};
void main()
{
	struct student *creat(void);
	struct student *p;
	int m=0;
	p=creat();
	while(p!=NULL)
	{
		printf("%s %s %c %d %s %s\n",(*p).num,(*p).name,(*p).sex,(*p).age,(*p).mark,(*p).add);
		p=(*p).next;
	} ;
}
int n;
struct student *creat(void)
{   int k;
	n=0;
	struct student *head,*p1,*p2;
	p2=p1=(struct student *)malloc(sizeof(struct student));
	scanf("%s%s %c%d%s%s",(*p1).num,(*p1).name,&(*p1).sex,&(*p1).age,(*p1).mark,(*p1).add);
	while(p2!=NULL)
	{
		n=n+1;
		if(n==1)
		{(*p2).next=NULL;}
		else {(*p1).next=p2;}
		p2=p1;
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s",(*p1).num);
		k=strcmp((*p1).num,"end");
		if(k==0)
		{break;}
		else if(k!=0)
		{
			scanf("%s %c%d%s%s",(*p1).name,&(*p1).sex,&(*p1).age,(*p1).mark,(*p1).add);
        }
	}
	return(p2);
}
