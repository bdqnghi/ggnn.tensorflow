
int n;

struct student
{char string[10000];
 struct student *next;
};

struct student *create(void)
{   
     struct student *tail,*p1,*p2,*head;

	 n=0;
	 p1=p2=(struct student *)malloc(Len);
	 gets(p1->string);
	 tail=NULL;

	 while(strcmp(p1->string,"end")!=0)
	 {
		 n=n+1;
		 if(n==1) 
		 {
			 tail=p1;
			 p1->next=NULL;
		 }
		 else
		 {
			 p1->next=p2;
		 }

		 p2=p1;
		 p1=(struct student *)malloc(Len); 
		 gets(p1->string);
	 }
	 head=p2;
	 return head;
}



void main()
{
	
	struct student *head,*p;
	head=create();

	p=head;
	
      do
        {
            puts(p->string);
            p=p->next;
        }
        while (p!=NULL);
    


	
} 