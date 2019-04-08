struct stu
{
	char infor[1000];
	struct stu *next;
} *p1,*p2;
struct stu *creat(void)
{   struct stu *head=NULL;
	   p2=p1=(struct stu*)malloc(sizeof(struct stu));
   gets(p1->infor);
	while(strcmp(p1->infor,"end")) 
	{
		if(head==NULL) head=p1;
	else  p2->next=p1;p2=p1;	
	p1=(struct stu*)malloc(sizeof(struct stu));
	gets(p1->infor);
	}

p2->next=NULL;
return(head);
}
struct stu *back(struct stu *head)
{
	struct stu *newp,*newhead=NULL;
	do{ p2=NULL;p1=head;
	while(p1->next!=NULL) {p2=p1;p1=p1->next;}
		if(newhead==NULL) newhead=p1,newp=newhead->next=p2;
		newp=newp->next=p2;
		p2->next=NULL;	
	}while(head->next!=NULL);
return (newhead);
}
void main()
{struct stu *head;
head=creat();
  head=back(head);
 for(p1=head;p1!=NULL;p1=p1->next)
  printf("%s\n",p1->infor);
 

}