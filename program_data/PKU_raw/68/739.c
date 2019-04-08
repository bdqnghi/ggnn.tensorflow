int main() 
{

   int a[10000],m,n,i,j=1,k,l;
   a[0]=2;
   for(m=3;m<=50000;m++)
   {
     for(i=2;i<=sqrt((float)m);i++)
       if(m%i==0)  break;
     if(i>sqrt((float)m))
      a[j++]=m;
      
   }
   scanf("%d",&n);
   for(i=3;i<=n/2;i++)
   {
     printf("%d=",2*i);
     for(k=0,l=j-1;k<=l;)
     {
       if(a[k]+a[l]==2*i) {printf("%d+%d\n",a[k],a[l]); break;}
       else if(a[k]+a[l]<2*i)  k++;
         else l--;
     } 
   }
       printf("\n");

}
