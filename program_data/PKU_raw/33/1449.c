int main(){
 int n,i,k;
 char zfc0[100];
 gets(zfc0);
 n=atoi(zfc0);
 for(i=0;i<n;i++){
 char zfc[256];
 gets(zfc);
 
 int a;
 a=strlen(zfc);
 for(k=0;k<a;k++){
  if(zfc[k]=='A'){
  zfc[k]='T';
  }
  else if(zfc[k]=='G'){
  zfc[k]='C';
  }
  else if(zfc[k]=='C'){
  zfc[k]='G';
  }
  else if(zfc[k]=='T'){
  zfc[k]='A';
  }else{
      zfc[k]='\0';
  }}
 printf("%s\n",zfc); 
 }
return 0;
}
