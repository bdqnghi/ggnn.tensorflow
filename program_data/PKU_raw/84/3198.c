int main()
{
 int n,a,max,i,max2;
 scanf("%d",&n);
 i=1;
    while(i<=n){
  scanf("%d",&a);
  if(a>max){
   max2=max;
   max=a;
  }
  else if(a>max2){
   max2=a;
    }
        i=i+1;
 }
 printf("%d\n%d\n",max,max2);
 return 0;
}
