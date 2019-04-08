struct pat
{
       char num[10];
	   int age;
       struct pat *next;
};

struct pat *creat(int n)
{
       struct pat *p1,*p2,*head;
       int i; 
	p2=head=p1=(struct pat *)malloc(sizeof(struct pat));
    for(i=0;i<n;i++)
	{
		scanf("%s %d",p1->num,&p1->age);
		if(i==0)
			head=p1;
        p2->next=p1;
		p2=p1;
		p1=(struct pat *)malloc(sizeof(struct pat));
	}
	p2=NULL;
	return head;
}


void array(struct pat *head,int n)
{
     int i,j,ta;
	 char str[10];
     struct pat *p1,*p2;
	 p1=head;
     for(i=0;i<n-1;i++)
     {
       for(j=0;j<n-1-i;j++)
       {
                 p2=p1;
                 p1=p1->next;
                 if((p1->age)>(p2->age)&&(p1->age)>=60)
                 {
                                                     
                                          strcpy(str,p2->num);
                                          strcpy(p2->num,p1->num);
                                          strcpy(p1->num,str);                                                           
                                          ta=p1->age;
										  p1->age=p2->age;
										  p2->age=ta;
                                      }
                     }
       p1=head;
     }
}  
   
void main()
{
      int n;
      scanf("%d",&n);
      struct pat *p;
      p=creat(n);
	  array(p,n);
     int i; 
     for(i=0;i<n;i++)
     {
      printf("%s\n",p->num);
      p=p->next;
     }
}    

