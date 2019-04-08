int pri(int a)
{
   int i;
   if(a%2==0) return 0;
   for(i=3;i<=sqrt(a);i+=2){
   if(a%i==0) return 0;
   }
   return 1;
}
int main()
{
   int n;
   scanf("%d",&n);
   int i,j;
   for(i=6;i<=n;i+=2){
       if(pri(i-2)==1) {printf("%d=2+%d\n",i,i-2);continue;}
       for(j=3;j<=i/2;j+=2){
       if(pri(j)==1&&pri(i-j)==1) {printf("%d=%d+%d\n",i,j,i-j);break;}
       }
       }
       
   }