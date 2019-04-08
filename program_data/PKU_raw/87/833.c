int main(){
int s,a,b,c,d,e,f;
while(1){
   scanf("%d%d%d%d%d%d\n",&a,&b,&c,&d,&e,&f);
   if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
     break;
   }
   if(f<c){
     f=f+60;
     e--;
   }
   if(e<b){
     e=e+60;
     d--;
   }
     d=d+12;
   s=f-c+60*(e-b)+3600*(d-a);
   printf("%d\n",s);
 }
   return 0;
}
