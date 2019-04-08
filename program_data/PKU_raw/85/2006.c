int main(){
  int n,i,a,b;
  scanf("%d",&n);
  char bsf[n][21];
  int l[21];
  for(i=0;i<n;i++){
      scanf("%s",&bsf[i]);
      l[i]=strlen(bsf[i]);
      a=0;
      if((bsf[i][a]>='a'&&bsf[i][a]<='z')||(bsf[i][a]>='A'&&bsf[i][a]<='Z')||(bsf[i][a]=='_')){
      b=1;
      for(a=1;a<l[i];a++){
          if((bsf[i][a]>='a'&&bsf[i][a]<='z')||(bsf[i][a]>='A'&&bsf[i][a]<='Z')||(bsf[i][a]=='_')||(bsf[i][a]>='0'&&bsf[i][a]<='9')){b++;}
      }
      if(b==l[i]){printf("yes\n");}
      else{printf("no\n");}
      }
      else{printf("no\n");}
  }
  return 0;
}









