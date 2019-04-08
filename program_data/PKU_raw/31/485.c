

struct stu
{
  char num[50];
  char name[50];
  char sex;
  int age;
  float score;
  char add[50];
  struct stu *forward;
};

void main()
{  int n=0;
   struct stu *head,*p1,*p2;head=NULL;
   p1=p2=(struct stu *)malloc(LEN);
   while(1)
   {
	   n++;
   if(n==1){head=p1;head->forward=NULL;}
   else {p1->forward=p2;}
   scanf("%s",p1->num);
      if(strcmp(p1->num,"end")==0)break;

   scanf(" %s",p1->name);
   scanf(" %c",&p1->sex);
   scanf(" %d",&p1->age);
   scanf(" %f",&p1->score);
   scanf(" %s",p1->add);
   p2=p1;
   p1=(struct stu *)malloc(LEN);
   } 
   
   struct stu *p;
   p=p2;
   if(p->forward!=NULL)
   {
     do
	 {
	 printf("%s %s %c %d %g %s\n",p->num,p->name,p->sex,p->age,p->score,p->add);
	 p=p->forward;
	 }while(p!=NULL);
   
   }

}