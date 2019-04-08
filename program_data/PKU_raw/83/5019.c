int main()
{
   int y[10],n,i,t,s2=0;
   float x[10],gpa,s1=0.0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&y[i]);
      s2+=y[i]; 
                     
   } 
   for(i=0;i<n;i++)
   {
      scanf("%d",&t);
      if(t>=90&&t<=100)
         x[i]=4.0 ;
      else if(t>=85&&t<=89)
         x[i]=3.7 ; 
      else if(t>=82&&t<=84)
         x[i]=3.3 ;
      else if(t>=78&&t<=81)
         x[i]=3.0 ; 
      else if(t>=75&&t<=77)
         x[i]=2.7 ;
      else if(t>=72&&t<=74)
         x[i]=2.3 ;
      else if(t>=68&&t<=71)
         x[i]=2.0 ;
      else if(t>=64&&t<=67)
         x[i]=1.5 ;
      else if(t>=60&&t<=63)
         x[i]=1.0 ;
      else
         x[i]=0.0;                         
   }
   for(i=0;i<n;i++)
   {
      s1+=x[i]*y[i];                
   }
   gpa=s1/s2;
   printf("%.2f",gpa);
   scanf("%d",&n);
   return 0;  
}
