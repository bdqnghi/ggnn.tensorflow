
int ture(int c[210],int a,int b)                                            //?????????????????? 
{  
   if(c[a]!=1||c[b]!=2)  
      {
                         return 0;
      }
   int i;
   int sum=0;
   for(i=a;i<=b;i++)
     {  sum=sum+c[i];
     }
   if(sum==3)
     {  c[a]=0;
        c[b]=0;
        return 1;                                    //?????1? 
     }
   else
     { 
       return 0;                                      
     }
}

int main()
{  char a[210]={0};
   char b;
   int i=0;
   int num;
   int c[210]={0};
   while(1)                                    //????? 
     {  cin.get(b);
        if(b=='\n')
           {  num=i;
              break;
           } 
        else 
           {  a[i]=b;
              i=i+1;
           }
     }
   
                           //???????????1??????2?? 
     for(i=0;i<num;i++)
            {   if(a[i]==a[0])
                   {  c[i]=1;
                   }
                else
                   {  c[i]=2;
                   }
            }
   
      int k;
      int t=0;
      int count=0;
      while(1)                           
      {   t=0;
          for(i=0;i<num;i++)
             { for(k=i+1;k<num;k++)
                  {  if(ture(c,i,k)==1)                 //????????? 
                        {  cout<<i<<' '<<k<<endl;
                           count=count+1;
                           t=1;
                           break;
                         }
                 }
             if(t==1)  break;  
            }
         if(count==num/2)   break;
      }
        
  
   return 0;
}
        