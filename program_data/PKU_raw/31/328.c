

struct stu
{char num[20];
 char name[20];
 char sex;
 int age;
 char score[10];
 char adr[20];
 struct stu *next;
};
int main(){
int n=0;
int i;
	struct stu *head;
    struct stu *p1,*p2,*re,*rehead;

	p1=p2=(struct stu *)malloc(len);
	scanf("%s %s %c %d %s %s",p1->num,p1->name,&p1->sex,&p1->age,p1->score,p1->adr);
	head=null;
	
	for(i=0;;i++){
	

		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		
		p1=(struct stu *)malloc(len);	
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0){
				break;}
		scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,p1->adr);
	}
	p2->next=null;
/*	p1=head;
	while(p1!=null){
			printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->adr);
			p1=p1->next;
		}*/
	for(i=0;i<n;i++){
		p2=p1=head;
		while(p1->next!=null){
			p2=p1;
			p1=p1->next;
		}
		if(i==0)
			re=rehead=p1;
		else
			re=re->next=p1;
		p2->next=null;
	}
		p1=rehead;
	while(p1!=null){
			printf("%s %s %c %d %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->adr);
			p1=p1->next;
	}

	return 0;
}
