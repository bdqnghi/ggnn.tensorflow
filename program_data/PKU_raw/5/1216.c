int main(){
  double a,g;
  int b,c,i,j,d,e,k,f=0;
  scanf("%lf",&a);
  char zfc1[500],zfc2[500];
  scanf("%s%s",zfc1,zfc2);
  b=strlen(zfc1);
  c=strlen(zfc2);
  for(i=0;i<b;i++){
	  if(zfc1[i]=='A'||zfc1[i]=='T'||zfc1[i]=='G'||zfc1[i]=='C'){
	        d=0;}
	  else{d=1;break;}}
  for(j=0;j<c;j++){
	  if(zfc2[j]=='A'||zfc2[j]=='T'||zfc2[j]=='G'||zfc2[j]=='C'){
	        e=0;}
	  else{e=1;break;}}
  if(b!=c||e==1||d==1){printf("error\n");}
  else{ for(k=0;k<b;k++){
	  if(zfc1[k]==zfc2[k]){f++;} }
     g=f*1.0/b;
		 if(g>a){printf("yes\n");}
		 else{printf("no\n");}
  }
  
	return 0;
}
