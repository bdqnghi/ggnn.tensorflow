struct student
{
 char num[10];
 char name[20];
 char sex[2];
 int  age;
 float score;
 char address[40];
 struct student *next;
};
void main()
{  
   struct student *p,*p1,*p2;
   p1=(struct student *)malloc(len);
   p1->next=NULL;
   scanf("%s",p1->num);
	   while(p1->num[0]!='e')
	   {
		   scanf("%s%s%d%f%s",p1->name,p1->sex,&p1->age,&p1->score,p1->address);
		p2=p1;
	    p1=(struct student*)malloc(len);
		p1->next=p2;
		scanf("%s",p1->num);
	   }
	   if(p2->next!=NULL){
   for(p=p2;p->next!=NULL;p=p->next)
	   {
	   printf("%s %s %s %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address);
	   }
       printf("%s %s %s %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->address); 
	   }
	   if(p2->next=NULL)

   printf("%s %s %s %d %g %s\n",p2->num,p2->name,p2->sex,p2->age,p2->score,p2->address); 
}