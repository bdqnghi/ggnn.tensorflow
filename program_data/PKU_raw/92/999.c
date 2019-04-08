
int bijiao(const void*x,const void*y)
{
return *((int*)y)-*((int*)x);    //???    
}

int main()
{
  int n; 
  while(scanf("%d",&n)&&(n!=0)) //????? 
  {
   int i,*tj,*qw,sum=0;
   tj=(int*)malloc(4*n);
   qw=(int*)malloc(4*n);
   for(i=0;i<n;i++)
   scanf("%d",tj+i);
   for(i=0;i<n;i++)
   scanf("%d",qw+i);                     
   qsort(tj,n,4,bijiao);                    
   qsort(qw,n,4,bijiao);                    
   
   int tmax=0,qmax=0,tmin=n-1,qmin=n-1; 
   for(i=0;i<n;i++)                   
   {
      if(*(tj+tmax)>*(qw+qmax))
      {sum+=200;tmax++;qmax++;}
      else if(*(tj+tmax)<*(qw+qmax))                              
      {sum-=200;tmin--;qmax++;}
      else
      {
        if(*(tj+tmin)>*(qw+qmin))    
        {sum+=200;tmin--;qmin--;}
        else if(*(tj+tmin)<*(qw+qmin))
        {sum-=200;tmin--;qmax++;}
        else 
             {
               if(*(tj+tmax)==*(qw+qmin))
               break;
               else
               {sum-=200;tmin--;qmax++;}                  
             }  
      } 
                                      
   }
   printf("%d\n",sum);                                        
   free(tj);
   free(qw);                    
  }
  
return 0;    
}  
