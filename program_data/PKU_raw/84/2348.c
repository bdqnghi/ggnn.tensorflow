int main() 
{
 int a,b,c,n,i,x;
 scanf("%d",&i);
 scanf("%d",&x);
 a=x;
 scanf("%d",&x);
 b=x;
 if(a<b){
        c=b;
        b=a;
        a=c;
        }
for(n=1;n<=(i-2);n++){
	scanf("%d",&x);
       if(x>=a){
       b=a;
       a=x;
       }else{
          if(x>b){
          b=x;
          }
       }
     }
 printf("%d\n",a);
 printf("%d",b);
 return 0 ;
}
