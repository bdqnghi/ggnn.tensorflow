struct student{
	struct student *pre;
    char No[10];
	char name[20];
	char sex;
	int age;
	float grade;
	char address[20];
	struct student *next;
};
struct student *create(){
    struct student *head,*p1,*p2,*h,*p;
	p1=(struct student *)malloc(sizeof(struct student));
	scanf("%s",p1->No);
	if(p1->No[0]=='e'){
	    free(p1);
		head=NULL;
		return head;
	}
	else{
	    scanf("%s",p1->name);
		getchar();
		scanf("%c",&p1->sex);
		scanf("%d",&p1->age);
		scanf("%f",&p1->grade);
		scanf("%s",p1->address);
		p1->next=NULL;
	}
	head=p1;
	p2=p1;
	for(;;){
        p1=(struct student *)malloc(sizeof(struct student));
	    scanf("%s",p1->No);
	    if(p1->No[0]=='e'){
			head->pre=NULL;
		    for(h=head;h->next!=NULL;){
		    p=h->next;
			p->pre=h;
			h=h->next;
		}
	    free(p1);
		return head;
		}
	    else{
	    scanf("%s",p1->name);
		getchar();
		scanf("%c",&p1->sex);
		scanf("%d",&p1->age);
		scanf("%f",&p1->grade);
		scanf("%s",p1->address);
		p1->next=NULL;
		}
		p2->next=p1;
		p2=p1;
	}
}
void destroy(struct student *head){
    struct student *p;
	for(;head!=NULL;){
	    p=head;
        head=head->next;
		free(p);
	}
}
void main()
{
	struct student *h,*t,*h1;
	h=create();
    for(h1=h;h1->next!=NULL;){
	    h1=h1->next;
	}
	for(t=h1;t!=NULL;t=t->pre){
	printf("%s %s %c %d %g %s\n",t->No,t->name,t->sex,t->age,t->grade,t->address);
    }
	destroy(h);
}