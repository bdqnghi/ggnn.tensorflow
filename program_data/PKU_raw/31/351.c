struct stu
{
	char xuehao[20];
	char name[20];
	char sex[10];
	int old;
	float score;
	char where[20];
	struct stu *next;
};
void main()
{
	struct stu *head,*p0,*p;
	int i;
	char a[4]="end\0";
	head=NULL;
	for(i=0;;i++)
	{
		p0=(struct stu*)malloc(LEN);
		scanf("%s",p0->xuehao);
		if(strcmp(p0->xuehao,a)==0)
			break;
		scanf("%s%s%d%f%s",p0->name,p0->sex,&p0->old,&p0->score,p0->where);
		if(head==NULL)
		{
			head=p0;
			p0->next=NULL;
			p=p0;
		}
		else
		{
			head=p0;
			p0->next=p;
			p=p0;
		}
	}
	for(p=head;p!=NULL;p=p->next)
	{
		printf("%s %s %s %d %g %s\n",p->xuehao,p->name,p->sex,p->old,p->score,p->where);
	}
}
