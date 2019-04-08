//******************************************
//*  ? ? ?:-1.2-                        * 
//*  ?    ?:???                       * 
//*  ????:10.6                         * 
//*  ????:??7?????              * 
int main()
{
  float n;
  int S=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int xi,yi,zi;
    if(i%7!=0)
    {
       xi=i;
       if(floor(xi/10.0)!=7)
       {
         yi=xi;
         if(yi%10!=7)
         {
           zi=yi;
           S=S+zi*zi;
         }
       }
    }  
   }
   cout<<S<<endl;
   return 0;
}
       
    
     
