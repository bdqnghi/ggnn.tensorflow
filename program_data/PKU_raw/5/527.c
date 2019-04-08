int main(){
 int a,b,s,i;
 double p,l;
 scanf("%lf",&p);
 char m[500],n[500];
 scanf("%s",m);
 scanf("%s",n);
 a=strlen(m);
 b=strlen(n);
 s=0;
 if(a==b){
  for(i=0;i<a;i++){
   if((m[i]!='A'&&m[i]!='T'&&m[i]!='C'&&m[i]!='G')||(n[i]!='A'&&n[i]!='T'&&n[i]!='C'&&n[i]!='G')){
    printf("error");
    s=1;
    break;
   }
  }
 }else{
  printf("error");
  s=1;
 }
 if(s==0){
  for(i=0;i<a;i++){
   if(m[i]==n[i]){
    s=s+1;
   }
  }
  l=s*1.0/a;
  if(l>p){
   printf("yes");
  }
  else{
   printf("no");
  }
 }


 return 0;
}


