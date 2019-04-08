struct student{
	char num[50];
	char name[50];
	char sex[50];
	char age[50];
	char score[50];
	char adr[50];
	struct student *next;
};//?????????????
int main(){
	struct student *p1,*p2,*head;
	p1=(struct student *)malloc(LEN);
	int i=0;
	p2=NULL;
	for(;;i++)
	{
		p1=(struct student *)malloc(LEN);
		scanf("%s",p1->num);
		if(strcmp(p1->num,"end")==0)
		{//??p1->num?????
			break;
		}
		scanf("%s %s %s %s %s",p1->name,p1->sex,p1->age,p1->score,p1->adr);
		p1->next=p2;
		p2=p1;
		
	}

	head=p2;
	if(head!=NULL)
	{
		p1=head;
		do{
			printf("%s %s %s %s %s %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->adr);
			p1=p1->next;
		}while(p1!=NULL);
	}
	return 0;
}