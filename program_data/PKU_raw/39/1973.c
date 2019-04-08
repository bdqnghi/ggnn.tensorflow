struct Node;
typedef struct Node *pNode; 
struct Node
{
	int av,py,thesis,sum;
	char name[20],west,gb;
	pNode next;
};


pNode create()
{
	pNode p;
	p=(pNode)malloc(sizeof(struct Node));
	p->next=NULL;
	return p;
}
int main()
{
    int i,n,max,sum=0;
    pNode q=NULL,p=NULL,head=NULL,maxn=NULL;
    scanf("%d",&n);
	head=create();
	q=head;
	for (i=1;i<=n;i++)
	{p=(pNode)malloc(sizeof(struct Node));
	if (p!=NULL)
	 {
	 scanf("%s %d %d %c %c %d",&(p->name),&(p->av),&(p->py),&(p->gb),&(p->west),&(p->thesis));
     p->sum=0;
	 if (p->av>80&&p->thesis>0)
			p->sum+=8000;
     if (p->av>85&&p->py>80)
			p->sum+=4000;
	 if (p->av>90)
			p->sum+=2000;
	 if (p->av>85&&p->west=='Y')
			p->sum+=1000;
	 if (p->py>80&&p->gb=='Y')
			p->sum+=850;
     p->next=NULL;
	 q->next=p;
	 sum+=p->sum;
	 q=p;
	}
	}
	maxn=head->next;
	p=head->next;
	while(1)
	{
		 if (p->sum>maxn->sum)
		 maxn=p;
		 if (p->next==NULL)
			 break;
		 p=p->next;
	}
	printf("%s\n%d\n%d", maxn->name,maxn->sum,sum);
   
	return 0;
}