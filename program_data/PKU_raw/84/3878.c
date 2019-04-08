int main(){
   int n, i, a, b ,c;
   scanf("%d", &n);
   for(i=1,a=0,b=0;i<=n;i++){
   scanf("%d", &c);
   if(c>a)
      b=a,a=c;
   else if(c>b)
      b=c;
   }
   printf("%d\n", a);
   printf("%d", b);
   return 0;
}
    
   