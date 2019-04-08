int sushu(int m);
int main()
{
    int n,y=0,i,a;
    scanf("%d",&n);
    if(n<5)printf("empty");
    else {
           printf("3 5\n");
           for(i=7;i<=n;i=i+2)
               if(sushu(i)==1&&sushu(i-2)==1)printf("%d %d\n",i-2,i);
          }
    return 0;     
}          
int sushu(int m){
    int p,q=1;
    for(p=3;p<=sqrt(m);p++){
        if(m%p==0){
           q=0;
           break;
           }
        }
    return q;
}