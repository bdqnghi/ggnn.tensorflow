struct  book  
{
    int  num;
    char  name[27];
    struct  book  *next;
};
   int  m;
struct  book   *head;   
   
struct   book  *setup()
{   int  t=0;
    struct  book  *head,*p1,*p2;
    head=p1=p2=(struct  book  *)malloc(sizeof  (struct  book));
    scanf("%d %s",&p1->num,p1->name);
    while(t<m)
    {   t++;
        p2->next=p1;
        p2=p1;
        p1=(struct  book  *)malloc(sizeof(struct  book));
        scanf("%d %s",&p1->num,p1->name);
    }
    p2->next=NULL;
    
    return(head);
}
   int   k=0,max=0;
void   found(struct  book  *p)
{     int  i,j;
      p=head;
      int  *pi;
      pi=(int *)malloc(sizeof(int)*26);
      for(i=0;i<26;i++)  *(pi+i)=0;
      for(i=0;i<m;i++)
         {
              for(j=0;p->name[j]!='\0';j++)
              {       
                         (*(pi+(p->name[j]-'A')))++;
              }
             p=p->next;
         }  
         for(j=0;j<26;j++)
          {  
                  if(*(pi+j)>max){
                   max=*(pi+j);
                   k=j;
                   }
          } 
          
}          
      int  main()
{   int  i,j;
    scanf("%d",&m);
    struct book *p;
     head=p=setup();
     found(p);
     printf("%c\n%d\n",(k+'A'),max); 
     p=head;
     for(i=0;i<m;i++)
        {for(j=0;p->name[j]!='\0';j++)
           if(p->name[j]==k+'A'){
           printf("%d\n",p->num);
           break;
           }
           p=p->next;
        }  
}