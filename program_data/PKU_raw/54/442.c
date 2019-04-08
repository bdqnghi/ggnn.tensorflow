int main() 
{
   int n,j,k,m,s=1,a=0;
   scanf("%d%d",&n,&k);
   j=1;
   for(;;)
   {  
    if(a==n) {printf("%d",m); break;}
    else if((j*n)%(n-1)!=0)  {j=1+s++; a=0;}
     else {
           m=j*n/(n-1)+k;
           j=m;
           a++;
           }
   }
   printf("\n");



}
   
