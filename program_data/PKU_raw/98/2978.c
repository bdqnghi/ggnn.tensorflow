int main(){
  int i,n,t;
  char a[1000][40];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",a[i]);
  }
  t=0;
  for(i=0;i<n-1;i++){
    if(strlen(a[i])+t>80){
      printf("\n%s",a[i]);
      t=strlen(a[i])+1;
    }
    else if(strlen(a[i])+t<=80){
      if(t+strlen(a[i])+1+strlen(a[i+1])<=80){
        printf("%s ",a[i]);
        t=t+strlen(a[i])+1;
      }else{
        printf("%s\n",a[i]);
        t=0;
      }
    }
  }
  printf("%s",a[n-1]);
  return 0;
}