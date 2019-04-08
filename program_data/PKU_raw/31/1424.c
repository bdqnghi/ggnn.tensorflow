struct student 
{ char s[100];
  struct student *next;
};

 struct student *creat()
 {
	 struct student *head,*p1,*p2;
	 p1=(struct student *)malloc(len);
	 gets(p1->s);
	 p1->next=null;
	 do
	 {
		p2=(struct student *)malloc(len);
		gets(p2->s);
		p2->next=p1;
		p1=p2;
	 } while(strcmp(p2->s,"end"));
		 head=p2;
		 return(head);
 }
 void main()
 {
	 struct student *p,*head;
	 head=creat();
	 p=head;
	 while(p->next){
		 p=p->next;
		 printf("%s\n",p->s);
	 }
 }
		
