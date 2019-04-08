int f(int a);
int main()
{
   int n,a,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       scanf("%d",&a);
       printf("%d\n",f(a));
   }
   return 0;
}
int f(int a){
    if(a==1||a==2){
       return 1;
    }
    int b,c,d,k;
    c=1;
    d=1;
    for(k=3;k<=a;k++){
        b=c;
        c=d;
        d=b+c;
    }
    return d;
}
   