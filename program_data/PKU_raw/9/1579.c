void main()
{
	  int n,m,i,j,max,l,sign=0;
	  scanf("%d",&n);
      struct tt
	  {
		  char pp[10];
		  int age;
		  struct tt *next;
	  };
	  struct tt *head,*p1,*p2,*p3;
	  head=(struct tt * )malloc(LEN);
	  p1=head; p2=head;
	  scanf("%s",head->pp);
	  scanf("%d",&head->age);
	  for(i=1;i<n;i++)
	  {
		  p1=(struct tt * )malloc(LEN);;
		  p2->next=p1;
		  scanf("%s",p1->pp);
	      scanf("%d",&p1->age);
		  p2=p1;
	  }
	  p2->next=NULL;
      for(i=1;i<=n;i++)
	  {
		  if(sign==1)
		  {
			  printf("%s\n",head->pp);
			  head=head->next;          
		  }
		  else if(sign==0)
		  {
		     max=(-1);
		     for(p2=NULL,p1=head;p1!=NULL;p1=p1->next)
			 {
			      if(p1->age>max) {max=p1->age; p3=p2;}
			      p2=p1;
			 }
			 if(max<60) {sign=1; i--; continue;}
			 else if(max>=60)
			 {
                 if(p3==NULL)
				 {
					 printf("%s\n",head->pp);
			         head=head->next;
				 }
				 else
				 {
					 p1=p3->next;
					 printf("%s\n",p1->pp);
					 p3->next=p1->next;
				 }
			 }
		 }
	  }
}