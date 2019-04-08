struct pa{
	char num[15];
	int age;
	struct pa *next;
};
int main()
{
    struct pa *p,*p1,*p2;
	int i=0,n;
	scanf("%d",&n);
	p1=(struct pa *)malloc(LEN);
	scanf("%s%d",p1->num,&p1->age);
	p1->next=NULL;
	p2=p1;
	p=p2;
	for(i=1;i<n;i++){
	    p1=(struct pa *)malloc(LEN);
		scanf("%s%d",p1->num,&p1->age);
		if(p1->age<60){
			while(p2->next!=NULL)
				p2=p2->next;
			p2->next=p1;
			p1->next=NULL;
		}
		else{
			if(p->age<p1->age){
				p1->next=p;
				p=p1;
			}
			else{ 
				while(p2->next!=NULL&&(p2->next)->age>=p1->age)
				p2=p2->next;
			p1->next=p2->next;
			p2->next=p1;
			}
		}
		p2=p;
	}
	while(p!=NULL){
		printf("%s\n",p->num);
		p=p->next;
	}
	return 0;
}