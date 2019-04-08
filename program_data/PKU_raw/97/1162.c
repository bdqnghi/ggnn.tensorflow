  int main(){
   int n,x;
   scanf("%d",&n);
   x=n/100;
   printf("%d\n",x);
   n=n-x*100;
   x=n/50;
  printf("%d\n",x);
  n=n-x*50;
  x=n/20;
  printf("%d\n",x);
  n=n-x*20;
  x=n/10;
  printf("%d\n",x);
n=n-x*10;
  x=n/5;
  printf("%d\n",x);
n=n-x*5;
  x=n;
  printf("%d",x);
  return 0;
}


   