char ss[]={'e','n','d'};
int n=0;
struct st
{
	char s[200];
	struct st *next1;
};
void main()
{
	struct st *p;
	struct st *creat(void);
	int i=0;
	struct st *head;
	struct st *p1,*p2;
	p1=p2=(struct st *)malloc(len);
	p1->next1=NULL;
	gets(p1->s);
	head=p1;
	while(1)
	{
		n++;
		if(n==1)head=p1;
		p2=p1;
		p1=(struct st *)malloc(len);
		gets(p1->s);
		p1->next1=p2;
		if(strcmp(p1->s,ss)==0)
		{
			break;
		}
	}
	head->next1=NULL;
	for(i=0;i<n;i++)
	{
		printf("%s\n",p2->s);
		p2=p2->next1;
	}
}