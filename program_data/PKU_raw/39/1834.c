struct student
{ 
	char name[20];
 int score; 
 int banji; 
 char ganbu; 
 char xibu; 
 int lunwen; 
 struct student *next;
};
struct student *create(void)
{ int n;
 scanf("%d",&n);
 struct student *head,*p1,*p2;
 int i; 
 p1=p2=(struct student *)malloc(LEN);
 scanf("%s %d %d %c %c %d",p1->name,&p1->score,&p1->banji,&p1->ganbu,&p1->xibu,&p1->lunwen);
 head=NULL;
 for(i=1;i<n;i++)
 {  
	 if(i==1) 
		 head=p1;  
	 else
		 p2->next=p1;  
	 p2=p1;  
	 p1=(struct student *)malloc(LEN); 
	 scanf("%s %d %d %c %c %d",p1->name,&p1->score,&p1->banji,&p1->ganbu,&p1->xibu,&p1->lunwen);
 } 
 p2->next=p1; 
 p1->next=NULL; 
 return(head);
}void main()
{ 
	struct student *p1,*p2;
	int max=0,sum=0; 
	for(p1=create();p1!=NULL;p1=p1->next)
	{ 
		int total=0; 
		if(p1->score>80 && p1->lunwen>=1)
			total=total+8000;
  if(p1->score>85 && p1->banji>80)
	  total=total+4000;  
  if(p1->score>90)
	  total=total+2000;  
  if(p1->score>85 && p1->xibu=='Y') 
	  total=total+1000;  
  if(p1->banji>80 && p1->ganbu=='Y') 
	  total=total+850;
  if(total>max)  
  {   
	  max=total; 
	  p2=p1;  
} 
  sum=sum+total;
 // printf("%d\n",total);
 }
	printf("%s\n%d\n%d",p2->name,max,sum);
}
