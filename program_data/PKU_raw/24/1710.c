int main(){
 int a,b=0,c=100,n,i,cd[200],tag=0;
 char dc[200][20],jz[400];
 gets(jz);
 n=strlen(jz);
 for(i=0;i<n;i++){
  a=0;
  while(jz[i]!=' '&&jz[i]!=','&&i<n){
   dc[tag][a]=jz[i];
            a++;
   i++;
  }
  if(jz[i]==','&&jz[i+1]==' '){
   i++;
  }
      cd[tag]=a;
      dc[tag][a]='\0';
      tag++;
 }
 for(i=0;i<tag;i++){
  if(b<cd[i]){
   b=cd[i];
  }
 }
 for(i=0;i<tag;i++){
  if(c>cd[i]){
   c=cd[i];
  }
 }
 for(i=0;i<tag;i++){
  n=cd[i];
  if(n==b){
   puts(dc[i]);
   break;
  }
 }
 for(i=0;i<tag;i++){
  n=cd[i];
  if(n==c){
   puts(dc[i]);
   break;
  }
 }
 return 0;
}
