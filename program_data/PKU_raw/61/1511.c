int main(){
  int a,b,c,n,i,d,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&d);
    a=1;b=1;
    if(d<3){printf("1\n");break;}
    for(j=3;j<=d;j++){
      c=a+b;
      a=b;
      b=c;
    }
    printf("%d\n",c);
  }
  return 0;
}
