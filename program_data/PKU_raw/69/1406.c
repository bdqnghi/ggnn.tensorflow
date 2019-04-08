/************************************************************
                ???(??)?????????
                  ??????
				  ?????2012.3.2
                  ???1100012617
************************************************************/

struct Node;

typedef struct Node* PNode;

struct Node                                                                      //???????
{
    PNode last;
    PNode next;
    char a;
};

PNode CreateNullList()                                                           //????????????
{
    PNode p=(PNode)malloc(sizeof(struct Node));
    p->next=NULL;
    p->last=NULL;
    return p;
}

void InsertNode(PNode p,char b)                                                   //?????????????
{
    PNode pn=(PNode)malloc(sizeof(struct Node));
    pn->a=b;
    pn->next=p->next;
    pn->last=p;
    p->next=pn;
    if(pn->next!=NULL)
    pn->next->last=pn;
}

int Compare(PNode p1,PNode p2)                                                   //??????p1?p2???
{                                                                                //????1??p1???????2??
    int i,j;                                                                     //p2??
    i=0;j=0;
    p1=p1->next;
    p2=p2->next;
    while(p1!=NULL)
    {
        i+=1;
        p1=p1->next;
    }
    while(p2!=NULL)
    {
        j+=1;
        p2=p2->next;
    }
    if((i-j)>=0)
        return 1;
    else
    return 2;
}

int Add(PNode p1,PNode p2)                                                       //????????????????
{                                                                                   //?p1?p2??????????
    int n,k;                                                                      //?????
    k=Compare(p1,p2);   
    PNode p3;                       
    p1=p1->next;
    p2=p2->next;
    if(k==2)	                                                                  //??k????p1?p2?????p1????????? 
    {
       p3=p1;
       p1=p2;
       p2=p3;
    }
    
          while((p1!=NULL)&&(p2!=NULL))                                            //???? 
          {
              n=p1->a-'0'+p2->a-'0';
              if(n<10)                                                            //??? 
              {                                                                   
                  p1->a=n+'0';
              }
              else                                                                 //????????????? 
              {
                  p1->a=n-10+'0';
                  if(p1->next==NULL)
                  {
                      PNode p=(PNode)malloc(sizeof(struct Node));
                      p->a='1';
                      p1->next=p;
                      p->next=NULL;
                      p->last=p1;
                  }
                  else
                  {
                      if(p2->next!=NULL)
                      p1->next->a=(p1->next->a)-'0'+1+'0';
                      else
                      {
                          p1->next->a=(p1->next->a)-'0'+1+'0';
                          p1=p1->next;
                          while((p1->a-'0')>9)
                          {
                               p1->a=p1->a-'0'-10+'0';
                               if(p1->next!=NULL)
                               {
                                  
                                  p1->next->a=(p1->next->a)-'0'+1+'0';
                                  
                                  p1=p1->next;
                               }
                               else
                               {
                                   PNode pointer=(PNode)malloc(sizeof(struct Node));
                                    pointer->a='1';
                                    p1->next=pointer;
                                    pointer->next=NULL;
                                    pointer->last=p1;
                               }
                          }
                      }
                  }
              }
              p1=p1->next;
              p2=p2->next;
          }
    return k;
}

int main()
{
       char c;
    PNode p1=CreateNullList();
    PNode p2=CreateNullList();
	PNode p3=p1;                                                                  //p3,p4????????????
    PNode p4=p2;                                                                  //????????

    c=getchar();
    while(c!='\n')
    {
        InsertNode(p1,c);
          c=getchar();
    }
    
   c=getchar();
    while(c!='\n')
    {
        InsertNode(p2,c);
        c=getchar();
    }
    
    

    int w;
    w=Add(p1,p2);

            if(w==1)
         p2=p1; 
            while(p2->next!=NULL)
            {
              p2=p2->next;
            }
            w=0;
          if((p2->last->last==NULL)&&(p2->a=='0'))
          printf("0");
          else
          {
            while(p2->last!=NULL)            
            {
                if(p2->a!='0')               
               {                
                 w=1;
                   printf("%c",p2->a);
                   p2=p2->last;
                }
                else
               {
                  if(w!=0)
                  {
                     printf("%c",p2->a);
                   p2=p2->last;

                   }
                   else
                   {
                       p2=p2->last;
                   }
                }
               
            }
            }
            printf("\n");
                   
      while (p3!=NULL)                                                           //????
      {
            p1=p3;
            p3=p3->next;
            free(p1);
      }
      while(p4!=NULL)
      {
          p1=p4;
          p4=p4->next;           
          free(p1);
      }
      getchar();
      getchar();
    return 0;

}

