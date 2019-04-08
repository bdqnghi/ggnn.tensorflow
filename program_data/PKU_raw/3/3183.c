int main(){
 int n,i,m,k,s[1000],q[1000];
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++){scanf("%d",&s[i]);}
 for(k=1;k<n;k++){q[k]=s[k];}
 int c=0;
 for(i=0;i<n;i++){if(c==m)break;else{
   for(k=1;k<n;k++){c=s[i]+q[k];if(c==m){printf("yes");break;}}}}
  if(c!=m){printf("no");}
  return 0;}

