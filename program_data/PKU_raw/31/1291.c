
struct student
{
       char name[100];
       struct student *next;
};

   
int main()
{
       struct student *head,*p1,*p2;int i=0,j=0,m=0,k=0,n;
       p1=(struct student *)malloc(Len);
       scanf("%s",p1->name);
       p1->next=NULL;head=p1;
       for(;strcmp(p1->name,"end")!=0;i++)
       {
           p2=p1;
           p1=(struct student*)malloc(Len);
           scanf("%s",p1->name);
           p1->next=NULL;
           p2->next=p1;
           p2=p1;
       }
     struct student *p; p=head; j=0;n=i/6;
     for(m=1;m<=n;m++)
     {   p=head;j=0;
    
         while(p&&j!=i-6*m)
         {
            p=p->next;
            j++;
         }
        
         if(p&&(j==i-6*m))
         {     
                for(k=0;k<5;k++)
               {
               printf("%s ",p->name);p=p->next;
               }
               printf("%s",p->name);
         }
        printf("\n");
     }
     }                     
                      
