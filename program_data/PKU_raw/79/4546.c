int main(){
  int n,m,count,number,del,i,j;
  int monkeys[302],result[100];
  scanf("%d%d",&n,&m);
  j=0;
  while(m>0&&n>0){
    j++;
	for(i=1;i<=n;i++){
      monkeys[i]=1;
    }  
    number=0;
    count=0;
    del=0;
    while(del<n-1){
      number++;
      if(number>n){
        number=1;
      }
      if(monkeys[number]==1){
        count++;
      }
      if(count==m){
        monkeys[number]=0;
        del++;
        count=0;
      }
    }
    number=1;
    while(1){
      if(monkeys[number]==1){
        break;
      }
      number++;
    }
    result[j]=number;
  scanf("%d%d",&n,&m);
  }
  for(i=1;i<=j;i++){
    printf("%d\n",result[i]);
  }
  return 0;
}