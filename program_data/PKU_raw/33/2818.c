
int main(){
 int n,i,k;
 scanf("%d",&n);
 char jj[1000][255];
 for(i=0;i<n;i++){
  scanf("%s",jj[i]);
  
  for(k=0;jj[i][k];k++){
   if(jj[i][k]=='A')
    jj[i][k]='T';
   else if(jj[i][k]=='T')
                 jj[i][k]='A';
   else if(jj[i][k]=='C')
     jj[i][k]='G';
   else if(jj[i][k]=='G')
        jj[i][k]='C';
  }
   printf("%s\n",jj[i]);
 }
 return 0;
}
