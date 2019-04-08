struct Inform
{
    char number[30];
    char name[30];
	char gender[2];
	char age[4];
	char score[10];
	char address[20]; 
	struct Inform *next;
};
 int n; 
 struct Inform *creat()
 {
      
	  struct Inform *head;
      struct Inform *p1,*p2;
      head=NULL;
      p1=p2=(struct Inform*)malloc(LEN);
      n=0; 
	  scanf("%s%s%s%s%s%s",&p1->number,&p1->name,&p1->gender,&p1->age,&p1->score,&p1->address);
      while(strcmp(p1->number,"end")!=0) 
	  {
	      n=n+1;
          if(n==1) head=p1;
          else p2->next=p1;
          p2=p1;
          p1=(struct Inform*)malloc(LEN);
          scanf("%s",&p1->number);
          if(strcmp(p1->number,"end")!=0) scanf("%s%s%s%s%s",&p1->name,&p1->gender,&p1->age,&p1->score,&p1->address);
      } 
	  p2->next=NULL;
	  return head;
}



void print(struct Inform *h)
{
     struct Inform *p;
	 p=h;
	 while(p!=NULL)
	 {
	    printf("%s %s %s %s %s %s\n",p->number,p->name,p->gender,p->age,p->score,p->address); 
		p=p->next; 
	 } 

} 

struct Inform *invert(struct Inform *h)
{
    struct Inform *p=h->next;
	 struct Inform *q=p->next;
	h->next=NULL; 
	while(q!=NULL)
	{p->next=h;h=p;p=q;q=q->next;p->next=h;
    } 
    p->next=h;
	return p;  
}


int main()
{
	void print(struct Inform *h); 
	struct Inform *invert(struct Inform *h);
	struct Inform *hea;
	hea=creat();
	hea=invert(hea);
	print(hea);
	return 0; 
} 
