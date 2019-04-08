struct node//????  PHEADER??????? 
{
       int value;
       struct node *pNext;
};
void insertAt(struct node *pHeader,char c,int n)//??N???????? 
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
int getAt(struct node *pHeader,int n)//????????N?? 
{
    int i;
    struct node *ptemp;
    for(i=0;i<n;i++)
    {
                     pHeader=pHeader->pNext;
    }
    return pHeader->value;
}
int compare(struct node *pHeader1,int n1,struct node *pHeader2,int n2)//?????????????????????1??????-1?????0 
{
    int i;
    int ans=0;
    if(n1>n2) return 1;
    else if(n1<n2) return -1;
    else
    {
        for(i=1;i<=n1;i++)
        {
                         if(getAt(pHeader1,i)>getAt(pHeader2,i))
                         {
                                    ans=1;
                                    break;
                         }
                         else if(getAt(pHeader1,i)<getAt(pHeader2,i))
                         {
                              ans=-1;
                              break;
                         }
        }
        return ans;
    }
}
main()
{
      char c;
      int n1,n2,n3;
      int temp,i,jinwei,jiewei;
      struct node *pHeader1=(struct node *)malloc(sizeof(struct node));//?2?????,?3???????? 
      struct node *pHeader2=(struct node *)malloc(sizeof(struct node));
      struct node *pHeader3=(struct node *)malloc(sizeof(struct node));
      pHeader1->pNext=NULL;//?????????NULL 
      pHeader2->pNext=NULL;
      pHeader3->pNext=NULL;
      n1=0;//????????? 
      for(;;)
      {
             scanf("%c",&c);
             if(c=='\n') break;//????,???? 
             else
             {
                 n1++;
                 insertAt(pHeader1,c,n1);//???? 
             }
      }
      n2=0;//????????? 
      for(;;)
      {
             scanf("%c",&c);
             if(c=='\n') break;//????,???? 
             else
             {
                 n2++;
                 insertAt(pHeader2,c,n2);//???? 
             }
      }
      if((getAt(pHeader1,1)!='-'-'0')&&(getAt(pHeader2,1)!='-'-'0')||((getAt(pHeader1,1)=='-'-'0')&&(getAt(pHeader2,1)=='-'-'0')))//??2???????????????? 
      {
                   if((getAt(pHeader1,1)=='-'-'0')&&(getAt(pHeader2,1)=='-'-'0'))//??2???????????????????????2????????1???????????? 
                   {
                               pHeader1=pHeader1->pNext;
                               pHeader2=pHeader2->pNext;
                               n1--;
                               n2--;
                               printf("-");
                   }
                   jinwei=0;//????????? 
                   n3=0;//??????? 
                   if(n1>=n2)//???????????????? 
                   { 
                                for(i=0;i<n2;i++)//?N2?? 
                                {
                                         temp=getAt(pHeader1,n1-i)+getAt(pHeader2,n2-i)+jinwei;//?????????? 
                                         if(temp>=10) 
                                         {
                                             temp=temp-10;//??10,????????? 
                                             jinwei=1;
                                         }
                                         else jinwei=0;
                                         n3++;//??????? 
                                         insertAt(pHeader3,temp+'0',n3);//????????? ,???????????,???????????????? 
                                }
                                for(i=n2;i<n1;i++)//?N2?N1?? 
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
                                if(jinwei==1)//???????????????,????????? 
                                {
                                         n3++;
                                         insertAt(pHeader3,'1',n3);
                                }
                   }
                   else//??????????????? 
                   {
                                 struct node*ptemp;//??????????????????,??????????? 
                                 int ntemp;
                                 ptemp=pHeader1;
                                 pHeader1=pHeader2;
                                 pHeader2=ptemp;
                                 ntemp=n1;
                                 n1=n2;
                                 n2=ntemp;
                                 for(i=0;i<n2;i++)//?????? 
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
      }
      else if((getAt(pHeader1,1)!='-'-'0')&&(getAt(pHeader2,1)=='-'-'0'))//??????????????????? 
      {
           pHeader2=pHeader2->pNext;//?????????? 
           n2--;
           jiewei=0;//??????? 
           n3=0;
           if(compare(pHeader1,n1,pHeader2,n2)<0)//??????????????????????????????????? 
           {
                   printf("-");
                   struct node*ptemp;//??????????????????,??????????? 
                   int ntemp;
                   ptemp=pHeader1;
                   pHeader1=pHeader2;
                   pHeader2=ptemp;
                   ntemp=n1;
                   n1=n2;
                   n2=ntemp;
           }
           for(i=0;i<n2;i++)//??????????????????????????????????????????????? 
           {
                         temp=getAt(pHeader1,n1-i)-getAt(pHeader2,n2-i)+jiewei;
                         if(temp<0)
                         {
                                   temp=temp+10;
                                   jiewei=-1;
                         }               
                         else jiewei=0;
                         n3++; 
                         insertAt(pHeader3,temp+'0',n3);     
           }
           for(i=n2;i<n1;i++)
           {
                          temp=getAt(pHeader1,n1-i)+jiewei;
                          if(temp<0)
                          {
                                    temp=temp+10;
                                    jiewei=-1;
                          }               
                          else jiewei=0;
                          n3++; 
                          insertAt(pHeader3,temp+'0',n3);    
           }           
      }
      else//????????????????????????? 
      {
                pHeader1=pHeader1->pNext;
                n1--;
                jiewei=0;
                n3=0;
                if(compare(pHeader1,n1,pHeader2,n2)>0) printf("-");//???????????????????? 
                if(compare(pHeader1,n1,pHeader2,n2)<0)//???????????????????????????????????????????????? 
                {
                      struct node*ptemp;//??????????????????,??????????? 
                      int ntemp;
                      ptemp=pHeader1;
                      pHeader1=pHeader2;
                      pHeader2=ptemp;
                      ntemp=n1;
                      n1=n2;
                      n2=ntemp;
                }
                for(i=0;i<n2;i++)
                {
                         temp=getAt(pHeader1,n1-i)-getAt(pHeader2,n2-i)+jiewei;
                         if(temp<0)
                         {
                                   temp=temp+10;
                                   jiewei=-1;
                         }               
                         else jiewei=0;
                         n3++; 
                         insertAt(pHeader3,temp+'0',n3);     
                }
                for(i=n2;i<n1;i++)
                {
                          temp=getAt(pHeader1,n1-i)+jiewei;
                          if(temp<0)
                          {
                                    temp=temp+10;
                                    jiewei=-1;
                          }               
                          else jiewei=0;
                          n3++; 
                          insertAt(pHeader3,temp+'0',n3);    
                }
      }
      //???????????? 
      if(n3==1&&getAt(pHeader3,n3)==0) printf("0");//??0+0??,????0 
      else
      {
          int jilu=0;//??????,?????????????,???????0099,????0023,??????0 
          for(i=0;i<n3;i++)
          {
                   if(getAt(pHeader3,n3-i)==0&&jilu==0) continue;//??????0,?????????0??, (???jilu=0),???????? 
                   else
                   {
                       jilu=1;//???????,???? 
                       printf("%d",getAt(pHeader3,n3-i));//??? 
                   }
          }
          if(jilu==0) printf("0");//???????????????N?0??jilu????0??????0 
      }
      
}

