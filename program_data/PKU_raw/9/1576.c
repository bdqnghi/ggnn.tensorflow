struct student{
	char num[20];
	int score;
	struct student * next;
};
int n=0;
struct student * creat(int numb);
void print(struct student *head);
struct student *maopao(struct student *head);
int main()
{
	int n;
	char ch;
	struct student *head;
	scanf("%d%c",&n,&ch);
	head=creat(n);
	head=maopao(head);
	print(head);
	free(head);
}

struct student * creat(int numb) /*?????*/
{
	struct student *head;       /*?????*/
	struct student *p1,*p2;     /*??????*/
	n=0;
	p1=p2=(struct student *)malloc(LEN);      /*????????(struct student *)?(void*)??malloc??????
	(struct student *)?*/
	scanf("%s %d",&p1->num,&p1->score);      /*????????*/
	head=NULL;
	while(n<numb-1)     /*??????*/
	{
		n=n+1;         /*?????*/
		if(n==1)      
		{
			head=p1;     /*?????????p1???head*/
		}
		else
		{
			p2->next=p1;     /*???p1??p2*/
		}
		p2=p1;      /*p2????*/
		p1=(struct student*)malloc(LEN);   /*????????*/
		scanf("%s %d",&p1->num,&p1->score);    /*???????*/
	}
	p2->next=p1;   /*????????next??NULL*/
	p1->next=NULL;
	return(head);   /*?????*/
}


struct student *maopao(struct student *head)
{
	struct student *p0,*p1,*p2,*tem;
	int temp=0,i,j;
	p0=head;
	p1=head;
	p2=head;
	if(head==NULL)
	{
		return(head);
	}
	else if(p0->next==NULL)
	{
		return(head);
	}
	else if(p0->next!=NULL)
	{
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n-1;j=j+1)
		{
			if(p1->score<p1->next->score&&j!=0&&p1->next->score>=60)
			{
				tem=p1->next;
				p2->next=p1->next;
				p1->next=tem->next;
				tem->next=p1;
				p2=p2->next;
			}
else if(p1->score<p1->next->score&&j==0&&p1->next->score>=60)
			{
				tem=p1->next;
				p0=tem;
				p2=tem;
				p1->next=tem->next;
				tem->next=p1;
				p2=p1;
				p1=p1->next;
			}
			else
			{
				p2=p1;
				p1=p1->next;
			}
		}
		temp=temp+1;
		p1=p0;
		p2=p0;
	}
	}
	return(p0);
}

void print(struct student *head)      /*????*/
{
	struct student *p,*tempo;      /*??????*/
	p=head;   /*??head??????*/
	if(head!=NULL)   /*????????*/
	{
		do
		{
		tempo=p->next;
	    printf("%s\n",p->num);
		p=tempo;
		}while(p!=NULL);   /*?p?????????*/
	}
}