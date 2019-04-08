struct stu{
	int ID;
	int ch;
	int ma;
	int sum;
	struct stu *next;
	};
int main(){
	struct stu *head;
	struct stu *p1,*p2,*a,*b,*c,*t;
	int n,i=0;
	a=b=c=p1=p2=(struct stu *) malloc(sizeof(struct stu));
	scanf("%d",&n);
	scanf("%d%d%d",&p1->ID,&p1->ch,&p1->ma);
	p1->sum=p1->ch+p1->ma;
	head=NULL;
	while(i<n-1){
		i++;
		p1->sum=p1->ch+p1->ma;
		if(i==1)head=p1;
		else p2->next=p1;
		p2=p1;
		if(p1->sum>a->sum) {c=b;b=a;a=p2;}
		else if(p1->sum>b->sum) {c=b;b=p2;}
		else if(p1->sum>c->sum) c=p2;
		p1=(struct stu *) malloc(sizeof(struct stu));
		scanf("%d%d%d",&p1->ID,&p1->ch,&p1->ma);
	}
	p2->next=NULL;
	printf("%d %d\n%d %d\n%d %d\n",a->ID,a->sum,b->ID,b->sum,c->ID,c->sum);
	return 0;
}
