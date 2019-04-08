
struct RAT
{
	int weight;
	char color[10];
	struct RAT *next;
};
int N;
int main()
{
	
    void sort(struct RAT *p);
	int i;
	scanf("%d",&N);

	struct RAT *head,*p1,*p2;
	p1=(struct RAT *)malloc(Len);
	scanf("%s %d",p1->color,&p1->weight);
	p1->next=NULL;
	head=p1;
	p2=p1;

	for (i=1;i<N;i++)
	{
		p1=(struct RAT *)malloc(Len);
		scanf("%s %d",p1->color,&p1->weight);
	    p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	sort (head);
	for (p1=head;p1!=NULL;p1=p1->next)
		printf("%s\n",p1->color);

	return 0;
}

void sort(struct RAT *p)
{
	int j,i;
	struct RAT *pt,temp;
	for(j=0;j<N;j++)
		for(pt=p,i=0;i<N-j-1;pt=pt->next,i++)
		{
			if((pt->weight<60&&pt->next->weight>=60)||(pt->weight>=60&&pt->next->weight>=60&&pt->weight<pt->next->weight))
			{
				temp=*pt;
				pt->weight=pt->next->weight;
				strcpy(pt->color,pt->next->color);
				pt->next->weight=temp.weight;
				strcpy(pt->next->color,temp.color);
			}
		}
}