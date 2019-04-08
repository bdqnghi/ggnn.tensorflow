int main(){
  int n,i,s=0;
  double r;
  char a[600],b[600];
  scanf("%lf",&r); scanf("%s",a); scanf("%s",b);
  if(strlen(a)!=strlen(b)){
      printf("error"); 
      return 0; 
  } 
  for(i=0;i<strlen(a);i++){ 
      if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
           if(a[i]==b[i]){ 
                s++; 
           } 
      }else{
            printf("error"); 
            return 0; 
      } 
  } 
  if(1.0*s/strlen(a)>r){ printf("yes"); }else if(1.0*s/strlen(a)<r){ printf("no"); } return 0;}
