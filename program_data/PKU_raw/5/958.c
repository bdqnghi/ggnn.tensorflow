int main(){
  int n,i,j,k,num=0,len1,len2,pos=0,lea;
  double rate;
  char a[500],b[500];
  scanf("%lf",&rate);
  scanf("%s",a);
  scanf("%s",b);
  len1=strlen(a);
  len2=strlen(b);
  if(len1!=len2)
    printf("error");
  else{
    for(k=0;a[k]!='\0';k++){
     if(a[k]!='A'&&a[k]!='T'&&a[k]!='C'&&a[k]!='G'){
      pos=0;
      break;
      }
      else if(b[k]!='A'&&b[k]!='T'&&b[k]!='C'&&b[k]!='G'){
      pos=0;
      break;
      }
      else{
       pos=1;
        if(a[k]==b[k]){
      num++;
      
     }
     } 
    }
   if(pos==1){
     if(1.0*num/len1>rate)
      printf("yes");
     else
      printf("no");
    }
    
   else{
      printf("error");
    }
  }
 return 0;
}