int main()
{
int m,a,b,i,k;
scanf("%d",&m);
for(a=3;a<=m/2;a=a+2)
   {
    b=m-a;
    i=2;
    k=2;
       while(i<=a-1) 
       { 
         if(a%i==0) 
         break;
         else
          
            i=i+1;
        }
        while(k<=b-1) 
       { 
         if(b%k==0) 
         break;
         else
          {if(k==b-1&&i==a)
           printf("%d %d\n",a,b);}
             k=k+1;
       }
 
   }
}