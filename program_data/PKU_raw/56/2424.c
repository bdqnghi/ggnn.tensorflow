
int main()
{
   int a[5],i=0,k,num;        //a[5]???????????,i,k????,num?????????
   cin>>num;
   do{
        a[i]=num%10;            
        num=num/10;            
        i++;                   
      }while(num!=0);           
   k=i;
   for(i=0;i<k;i++)                
     cout<<a[i];          
}
  
