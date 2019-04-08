struct student
{
	char num[10];
	char name[20];
	char gender[2];
	int year;
	char score[10];
	char ad[20];
	struct student *next;
};

int main()
{
	int i,count=0;
	struct student *head,*p1,*p2,*p,*q,*temp;
	for(i=1;i<=10000;i++){
		p1=(struct student *)malloc(sizeof(struct student));
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0){
			head=temp;
			break;
		}
		else if(i==1){
			p1->next=NULL;
			p2=p1;
			temp=p1;
		}
		else{
			p1->next=p2;
			p2=p1;
			temp=p1;
		}
		scanf("%s",p1->name);
		scanf("%s",p1->gender);
		scanf("%d",&p1->year);
		scanf("%s",p1->score);
		scanf("%s",p1->ad);
		count=count+1;
	}
	for(i=1;i<=count;i++){
		if(i==1){
			p=head;
		}
		printf("%s %s %s %d %s %s\n",p->num,p->name,p->gender,p->year,p->score,p->ad);
		p=p->next;
		if(p==NULL){
			break;
		}
	}


	return 0;
}
