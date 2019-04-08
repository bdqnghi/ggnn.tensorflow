int main(){
  int i,l,n,j;
  char zfc[300];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%s",zfc);
   l=strlen(zfc);
  for(j=0;j<l;j++){
   if(zfc[j]=='A') zfc[j]='T';
   else if(zfc[j]=='T') zfc[j]='A';
   else if(zfc[j]=='C') zfc[j]='G';
   else if(zfc[j]=='G') zfc[j]='C';
 }
   printf("%s\n",zfc);
}

return 0;
}