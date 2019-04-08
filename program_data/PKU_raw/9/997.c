struct mouse{
	int weight;
	char color[11];
	struct mouse *next,*before;
};
int main(){
	int i,j,n,max;
	scanf("%d",&n);
	struct mouse *m,*head,*p1,*p2,*fin;
	head=p1=p2=(struct mouse *) malloc(sizeof(struct mouse));
	scanf("%s %d",p1->color,&p1->weight);
	for (i=1;i<=n-1;i++){
		p1=(struct mouse *) malloc(sizeof(struct mouse));
		scanf("%s %d",p1->color,&p1->weight);
		p2->next=p1;p1->before=p2;p2=p1;
	}
	fin=p1;
	p1->next=NULL;
	for (i=1;i<=n-1;i++){
		max=0;p1=head;
		for (j=1;j<=n+1-i;j++){
			if (p1->weight>max) {max=p1->weight;m=p1;}
			p1=p1->next;
		}
		if (m->weight<60) break;
		printf("%s\n",m->color);
		if (m==head) {head=head->next;continue;}
		if (m==fin) {fin=fin->before;fin->next=NULL;continue;}
		if (m!=head && m!=fin) {p1=m->before;p1->next=m->next;m=m->next;m->before=p1;}
	}
	p1=head;
	printf("%s\n",head->color);
	for (;p1->next!=NULL;){
		p1=p1->next;printf("%s\n",p1->color);
	}
}