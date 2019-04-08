int main(){
     char d[260];
  int i=0,j=0,n;
  char A,T,G,C;
  scanf("%d",&n);
  for(j=0;j<n;j++){
      scanf("%s",d);
  for(i=0;d[i]!='\0';i++){
   if(d[i]=='A')     {d[i]='T';}
   else if(d[i]=='T'){d[i]='A';}
   else if(d[i]=='G'){d[i]='C';}
   else if(d[i]=='C'){d[i]='G';}
  }
  printf("%s\n",d);
  }
     return 0;
}
 