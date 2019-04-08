int main(){
   int l,a,b,s,i;
   double n,x;
   char zfca[501];
   char zfcb[501];
   a=0;
   b=0;
   scanf("%lf",&n);
   scanf("%s",zfca);
   scanf("%s",zfcb);
    

    int la=strlen(zfca);
    int lb=strlen(zfcb);
   if (la!=lb){printf("error");}
   else {a=1;}
 
  if(a==1){
   while(1){
   for(i=0;zfca[i]!='\0';i++){
     if(zfca[i]!='A'&&zfca[i]!='T'&&zfca[i]!='C'&&zfca[i]!='G'){
            printf("error");
            break;}}
   if(zfca[i]!='\0'&&zfca[i]!='A'&&zfca[i]!='T'&&zfca[i]!='C'&&zfca[i]!='G'){break;}
   
   for(i=0;zfcb[i]!='\0';i++){
     if(zfcb[i]!='A'&&zfcb[i]!='T'&&zfcb[i]!='C'&&zfcb[i]!='G'){
            printf("error");
            break;}}
   if(zfcb[i]=='\0'){b=1;}
   break;  
}}
  if (a==1&&b==1){
    for(i=0,s=0;zfca[i]!='0';i++)
    {if(zfca[i]==zfcb[i]){s=s+1;}}
  if(a==1&&b==1){x=1.0*s/la;
     if(x>n){printf("yes");}
     else {printf("no");}
      }    
   }
  return 0;
}









