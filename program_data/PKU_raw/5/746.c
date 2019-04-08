int main(){
  char sz1[501],sz2[501];
  int n,i,result=0,x=0;
  double p;
  scanf("%lf",&p);
  scanf("%s%s",sz1,sz2);
  n=strlen(sz1);
  for(i=0;i<n;i++){
    if(((sz1[i]!='A')&&(sz1[i]!='T')&&(sz1[i]!='C')&&(sz1[i]!='G'))||((sz2[i]!='A')&&(sz2[i]!='T')&&(sz2[i]!='C')&&(sz2[i]!='G'))){
      result=1;
      break;
    }else if(sz1[i]==sz2[i]){
      x++;
    }
  }
  if(result==1){
    printf("error\n");
  }else if((1.0*x/n)>p){
    printf("yes\n");
  }else{
    printf("no\n");
  }
  return 0;
}
