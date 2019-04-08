struct student
{
    char a[10];
	char b[20];
	char c;
	int d;
    float e;
	char f[19];
	struct student * next;
};
int main()
{
	struct student *p1,*p2;
    p1=(struct student *)malloc(len);
	scanf("%s %s %c %d %f %s",p1->a,p1->b,&p1->c,&p1->d,&p1->e,p1->f);
	p1->next=NULL;
	p2=p1;
	while(1)
	{   
		p1=(struct student *)malloc(len);
		scanf("%s",p1->a);
		if(strcmp(p1->a,"end")==0)
			break;
        scanf("%s %c %d %f %s",p1->b,&p1->c,&p1->d,&p1->e,p1->f);
		p1->next=p2;
		p2=p1;
	}
	p1=p2;
	while(p1!=NULL)
	{
		printf("%s %s %c %d %g %s\n",p1->a,p1->b,p1->c,p1->d,p1->e,p1->f);
		p1=p1->next;
	}
	return 0;
}
