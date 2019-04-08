 struct pat
{
  char id[10];
  int age;
  struct pat *next;
 };
 void main()
 {
	 struct pat *head,*p;
	 int i,n;
     void search(struct pat *head,int n);
	 scanf("%d",&n);
	 head=(struct pat*)malloc(sizeof(struct pat));
	 p=head;p->next=NULL;
	 scanf("%s %d",p->id,&p->age);
	 for(i=1;i<n;i++)
	 {
		 p->next=(struct pat*)malloc(sizeof(struct pat));
		 p=p->next;
		 scanf("%s %d",p->id,&p->age);
		 p->next=NULL;
	 }
	 search(head,n);
 }
  void search(struct pat *head,int n)
 {
	 int i,j=0,k=0;
	 struct pat *t,*m,*p,*head1,*head2;
	 struct pat *sort(struct pat *head1,int j);
	 void print(struct pat *head1,struct pat *head2,int j,int k);
	 p=head;
	 t=(struct pat*)malloc(sizeof(struct pat));
	 m=(struct pat*)malloc(sizeof(struct pat));
     for(i=0;i<n;i++)
	 {
		 if(p->age>=60)
		 {  
			 j++;
			 if(j==1) head1=t;
			 strcpy(t->id,p->id);t->age=p->age;
		     t->next=(struct pat*)malloc(sizeof(struct pat));
		     t=t->next;t->next=NULL;
		 }
		 else
		 {
			 k++;
			 if(k==1) head2=m;
			 strcpy(m->id,p->id);m->age=p->age;
		     m->next=(struct pat*)malloc(sizeof(struct pat));
		     m=m->next;m->next=NULL;
		 }
		 p=p->next;
	 }
	 sort(head1,j);
	 print(head1,head2,j,k);
  }
  struct pat *sort(struct pat *head1,int j)
  {
	 int i,l,t;
	 char a[10];
	 struct pat *p1,*p2;
     for(i=0;i<j-1;i++)
	 {
		 p1=head1;
		 for(l=0;l<j-i-1;l++)
		 {
			p2=p1;p1=p1->next;
           if(p1->age>p2->age)
		   {
			    t=p1->age;p1->age=p2->age;p2->age=t;
				strcpy(a,p1->id);strcpy(p1->id,p2->id);strcpy(p2->id,a);
		   }
		 }
	 }
	 return(head1);
  }
  void print(struct pat *head1,struct pat *head2,int j,int k)
  {
	int i;
	struct pat *p;
    p=head1;
    for(i=0;i<j;i++)
	{
		printf("%s\n",p->id);
		p=p->next;
	}
	p=head2;
	for(i=0;i<k;i++)
	{
			printf("%s\n",p->id);
			p=p->next;
	}
  }

