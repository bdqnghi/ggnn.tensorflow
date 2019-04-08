int main(){
  int t,e,i,z;
  e=0;
  double x,y,k,h;
  scanf("%lf",&k);
  char a[510],b[510];
  scanf("%s",a);
  scanf("%s",b);
  t=strlen(a);
  if(strlen(a)!=strlen(b)){
    printf("error");
  }else{
     for(i=0;a[i]!='\0';i++){
       if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
           z++;
          }else if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
            z++;
          }else if(a[i]==b[i]){
              e++;
             }
       }
     if(z!=0){
       printf("error");
     }else{
     x=e;
     y=t;
     h=x/y;
     if(h>k){
       printf("yes");
    }else{
        printf("no");
    }
    }
  }
  return 0;
}
