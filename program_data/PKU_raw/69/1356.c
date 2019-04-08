struct node
{
       int value;
       struct node *pNext;
};
void insertAt(struct node *pHeader,char c,int n)
{
     int i;
     for(i=1;i<n;i++)
     {
                     pHeader=pHeader->pNext;
     }
     struct node *ptemp=(struct node *)malloc(sizeof(struct node));
     ptemp->pNext=pHeader->pNext;
     pHeader->pNext=ptemp;
     ptemp->value=c-'0';
}
int getAt(struct node *pHeader,int n)
{
    int i;
    struct node *ptemp;
    for(i=0;i<n;i++)
    {
                     pHeader=pHeader->pNext;
    }
    return pHeader->value;
}
main()
{
      char c;
      int n1,n2,n3;
      int temp,i,jinwei;
      struct node *pHeader1=(struct node *)malloc(sizeof(struct node));
      struct node *pHeader2=(struct node *)malloc(sizeof(struct node));
      struct node *pHeader3=(struct node *)malloc(sizeof(struct node));
      pHeader1->pNext=NULL;
      pHeader2->pNext=NULL;
      pHeader3->pNext=NULL;
      n1=0;
      for(;;)
      {
             scanf("%c",&c);
             if(c=='\n') break;
             else
             {
                 n1++;
                 insertAt(pHeader1,c,n1);
             }
      }
      n2=0;
      for(;;)
      {
             scanf("%c",&c);
             if(c=='\n') break;
             else
             {
                 n2++;
                 insertAt(pHeader2,c,n2);
             }
      }
      jinwei=0;
      n3=0;
      if(n1>=n2)
      {
               for(i=0;i<n2;i++)
               {
                                temp=getAt(pHeader1,n1-i)+getAt(pHeader2,n2-i)+jinwei;
                                if(temp>=10) 
                                {
                                             temp=temp-10;
                                             jinwei=1;
                                }
                                else jinwei=0;
                                n3++;
                                insertAt(pHeader3,temp+'0',n3);
               }
               for(i=n2;i<n1;i++)
               {
                                 temp=getAt(pHeader1,n1-i)+jinwei;
                                 if(temp>=10)
                                 {
                                             temp=temp-10;
                                             jinwei=1;
                                 }
                                 else jinwei=0;
                                 n3++;
                                 insertAt(pHeader3,temp+'0',n3);
               }
               if(jinwei==1)
               {
                            n3++;
                            insertAt(pHeader3,'1',n3);
               }
      }
      else
      {
          struct node*ptemp;
          int ntemp;
          ptemp=pHeader1;
          pHeader1=pHeader2;
          pHeader2=ptemp;
          ntemp=n1;
          n1=n2;
          n2=ntemp;
          for(i=0;i<n2;i++)
               {
                                temp=getAt(pHeader1,n1-i)+getAt(pHeader2,n2-i)+jinwei;
                                if(temp>=10) 
                                {
                                             temp=temp-10;
                                             jinwei=1;
                                }
                                else jinwei=0;
                                n3++;
                                insertAt(pHeader3,temp+'0',n3);
               }
               for(i=n2;i<n1;i++)
               {
                                 temp=getAt(pHeader1,n1-i)+jinwei;
                                 if(temp>=10)
                                 {
                                             temp=temp-10;
                                             jinwei=1;
                                 }
                                 else jinwei=0;
                                 n3++;
                                 insertAt(pHeader3,temp+'0',n3);
               }
               if(jinwei==1)
               {
                            n3++;
                            insertAt(pHeader3,'1',n3);
               }
      }
      int jilu=0;
      if(n3==1&&getAt(pHeader3,n3)==0) printf("0");
      else
      {
       for(i=0;i<n3;i++)
       {
                       if(getAt(pHeader3,n3-i)==0&&jilu==0) continue;
                       else
                       {
                           jilu=1;
                           printf("%d",getAt(pHeader3,n3-i));
                       }
       }
      }
      }
