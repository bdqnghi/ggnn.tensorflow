
int main()
{
   char q,*p;
   int now;
   scanf("%c",&q);
   while (!((('0'<=q) && ('9'>=q)))) 
       {  
         scanf("%c",&q);
       //  printf("%c\n",q);
         }
   long tot=0;
   while (q!='\n') 
      {
           if (('0'<=q)&& ('9'>=q))
                  { 
                          tot=tot*10+q-'0';
                          now=1;       
                  }                                    
               else if (tot!=0){
                       printf("%d\n",tot);
                       tot=0;
                       now=0;
                    }
           scanf("%c",&q);
      }    
   if( now !=0) printf("%d\n",tot);
     //      scanf("%c",&q);
     //      scanf("%c",&q);
}
