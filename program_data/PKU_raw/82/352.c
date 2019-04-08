int main(){
   int a,b,n,c,d,e,f;
   d=0;
   e=0;
   scanf("%d",&n);
   for(a=0;a<n;a+=1){
       scanf("%d%d",&b,&c);
       if((b>=90)&&(b<=140)&&(c>=60)&&(c<=90)){
            d+=1;
            if(d>e){
               e=d;
                }}
       else{
               d=0;}
          }
   printf("%d\n",e);
   return 0;
}