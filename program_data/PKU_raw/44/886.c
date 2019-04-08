int main()
{
int n,m,i;
int reverse(int num);
for(i=0;i<6;i++)
     {
         scanf("%d",&n);
         m=reverse(n);
         printf("%d\n",m);
     }
getchar();getchar();getchar();
}
int reverse(int num)
{
int k,p; 
p=0;
k=0;
if(num==0)
return(0);
else
     {
          if(num>0)
            {
                if(num<10)
                return(num);     
                else
                {
                    while(k==0)
                    {
                       k=num%10;
                        if(k!=0)
                        break;
                       num=num/10;
                    }
                    while(num!=0)
                      {
                         k=num%10;
                         num=num/10;
                        
                                p=p+k;
                                p=10*p;
                      }
                      return(p/10);
                }   
            }  
           else
           {
               num=-num;
              if(num<10)
                return(num);     
                else
                {
                    while(k==0)
                    {
                       k=num%10;
                        if(k!=0)
                        break;
                       num=num/10;
                    }
                    while(num!=0)
                      {
                         k=num%10;
                         num=num/10;
                        
                                p=p+k;
                                p=10*p;
                      }
                      return(-p/10);
                }   
            }
     }
}
