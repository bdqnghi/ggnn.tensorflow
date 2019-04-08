struct student{
char num[20];
int age;
struct student *next;
};
int n,i;
struct student *create()
{
	struct student *head;
	struct student *p1,*p2;
	head=NULL;
	scanf("%d",&i);
	n=0;
	p1=p2=(struct student *)malloc(len);
	scanf("%s %d",p1->num,&p1->age);
	while(n!=i-1)
	{
		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student *)malloc(len);
		scanf("%s %d",p1->num,&p1->age);
	}
	p2->next=p1;
	p1->next=NULL;
	return(head);
}
void paixu(struct student *p){
	struct student *p1,*p2;
  char temp[20];
	int temp2; 
	for(n=1;n<i;n++){
		p2=p;
	p1=p->next;
	while(p1!=NULL){
			if(p1->age>=60&&p2->age<60){
				
	strcpy(temp,p1->num);
				strcpy(p1->num,p2->num);
				strcpy(p2->num,temp);	
	temp2=p1->	age;
		p1->age=p2->	age;
	p2->age=temp2;
}
			else if(p1->age>p2->age&&p2->age>=60){
				strcpy(temp,p1->num);
				strcpy(p1->num,p2->num);
				strcpy(p2->num,temp);	
	temp2=p1->	age;
		p1->age=p2->	age;
	p2->age=temp2;

	}
			p2=p1;
			p1=p1->next;
		}
	}
}
void print(struct student *p)
{
	while(p!=NULL)
	{
		printf("%s",p->num);
		p=p->next;
		if(p!=NULL)
			printf("\n");
	}
}
void main()
{
	struct student *p;
	p=create();
	paixu(p);
	print(p);
}