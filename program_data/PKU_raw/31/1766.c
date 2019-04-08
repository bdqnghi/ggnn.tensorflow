struct student{
	struct student * formal;
	char xuehao[20];
	char xingming[20];
	char xingbie;
	int nianling;
	char defen[20];
	char dizhi[30];
	struct student * next;
};        
int n=0;    
struct student * creat(void);
void print(struct student *end);

void main()
{
	struct student * enda;
	enda=creat();
	print(enda);
	return 0;
}

struct student * creat(void)
{
	struct student * end;       
	struct student *p1,*p2;     
	n=0;
	p1=p2=(struct student *)malloc(LEN);      
	scanf("%s",p1->xuehao);    
	while(p1->xuehao[0]!='e')
	{
		scanf("%s %c %d%s%s",p1->xingming,&p1->xingbie,&p1->nianling,p1->defen,p1->dizhi);
		n=n+1;      
		if(n==1)
		{
			p1->formal=NULL;
		}
		else
		{
			p2->next=p1;
			p1->formal=p2;
		}
		p2=p1;
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->xuehao);
	}
	p2->next=NULL;
	end=p2;   
	return(end);
}

void print(struct student *end)
{
	struct student *p;
	p=end;
	if(end!=NULL)
	{
		do
		{
	    printf("%s %s %c %d %s %s\n",p->xuehao,p->xingming,p->xingbie,p->nianling,p->defen,p->dizhi);
		p=p->formal;
		}while(p!=NULL);
	}
}