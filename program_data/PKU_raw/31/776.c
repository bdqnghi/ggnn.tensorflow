struct student//?? ?? ?? ?? ?? ??
{
	char num[12];
	char name[20];
	char sex;
	int age;
	float grade;
	char add[12];
	struct student *next;
};
int n=1;
struct student *build(void)	//????
{
	struct student *pn, *pt;
	pn=(struct student*)malloc(sizeof(struct student));
	scanf("%s",pn->num);
	pn->next=NULL;
	while(pn->num[0]!='e')
	{
		scanf(" %s %c %d %f %s",&pn->name,&pn->sex,&pn->age,&pn->grade,&pn->add);
		pt=pn;
		pn=(struct student*)malloc(sizeof(struct student));
		pn->next=pt;
		scanf("%s",pn->num);
	}
	return (pt);
}
void main()
{
	struct student *p;
	p=build();
	while(p!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->grade,p->add);
		p=p->next;
	}
}
