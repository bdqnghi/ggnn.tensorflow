struct student
{  char id[100];
   char name[100];
   char sex;
   int age;
   char score[100];
   char adress[100];
   struct student *next;
   struct student *formal;
};
int n;
int main ()
{  struct student *head,*p1,*p2;
   n=0;
   int i=0;
   p1=p2=(struct student*)malloc(len);
   head=NULL;
   while(0==0)
   {   n=n+1;
       
   scanf("%s ",p1->id);
   if((*p1).id[0]=='e') break;
   scanf("%s %c %d %s %s",p1->name,&p1->sex,&p1->age,p1->score,
   p1->adress);  
   if(n==1) {head=p1;
   p1->formal=NULL;}
   else {p2->next=p1;
   p1->formal=p2;}
   p2=p1; 
       p1=(struct student*) malloc(len);
   
   }
    p2->next=NULL;
   while (0==0)
   {  printf("%s %s %c %d %s %s\n",p2->id,p2->name,p2->sex,p2->age,p2->score,
   p2->adress);
   if(p2->formal==NULL) break;
   p2=p2->formal;
   }  
   return 0;
}
