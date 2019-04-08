struct Student{
	char name[50];
	int cj,py,lw,sum;
	char gb,xb;
	struct Student *next;
}*p1,*p2,*head,*p,*ans;
int main()
{
	int n,i=0,sum=0,j,k;
	scanf("%d",&n);
	
	head = NULL;	
	for (i=0;i<n;i++){
		p1 = (struct Student *)malloc(Len);
		if (i==0) head = p1;
		else p2->next = p1;
        p2 = p1;
	    scanf("%s%d%d %c %c%d",p1->name,&p1->cj,&p1->py,&p1->gb,&p1->xb,&p1->lw);
	    p1->sum = 0;
	}
	p1->next = NULL;
	
	p = head;
	do{
		if (p->cj>80&&p->lw>=1) p->sum+=8000;
		if (p->py>80&&p->gb=='Y') p->sum+=850;
		if (p->cj>85&&p->py>80) p->sum+=4000;
		if (p->cj>85&&p->xb=='Y') p->sum+=1000;
		if (p->cj>90) p->sum+=2000;
		p = p->next;
	}while (p);
	
	ans = (struct Student *)malloc(Len);
	ans->sum = 0;
	p = head;
	do{
		sum+=p->sum;
		if (p->sum>ans->sum) ans = p;
		p=p->next;
	}while(p);
	
	printf("%s\n%d\n%d",ans->name,ans->sum,sum);
	return 0;
}
